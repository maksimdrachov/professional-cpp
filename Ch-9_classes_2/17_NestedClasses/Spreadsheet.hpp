#pragma once

#include <cstddef>

//

#include <string>
#include <string_view>

class SpreadsheetApplication { };

class Spreadsheet
{
public:

	class Cell
	{
	public:
		Cell() = default;
		Cell(double initialValue);
		Cell(std::string_view initialValue);

		void set(double value);
		void set(std::string_view value);

		double getValue() const;
		std::string getString() const;

	private:
		std::string doubleToString(double value) const;
		double stringToDouble(std::string_view value) const;

		double m_value{ 0 };
	};

	Spreadsheet(const SpreadsheetApplication& theApp, size_t width = 0, size_t height = 0);
	Spreadsheet(const Spreadsheet& src);
	~Spreadsheet();
	Spreadsheet& operator=(const Spreadsheet& rhs);

	void setCellAt(size_t x, size_t y, const Cell& cell);
	Cell& getCellAt(size_t x, size_t y);

	size_t getId() const;

	void swap(Spreadsheet& other) noexcept;

	static const size_t MaxHeight{ 100 };
	static const size_t MaxWidth{ 100 };

private:
	void verifyCoordinate(size_t x, size_t y) const;

	size_t m_id{ 0 };
	size_t m_width{ 0 };
	size_t m_height{ 0 };
	Cell** m_cells{ nullptr };

	const SpreadsheetApplication& m_theApp;

	static inline size_t ms_counter{ 0 };
};

void swap(Spreadsheet& first, Spreadsheet& second) noexcept;
