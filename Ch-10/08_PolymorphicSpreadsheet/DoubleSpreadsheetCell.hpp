#pragma once

#include "SpreadsheetCell.hpp"
#include <string>
#include <string_view>
#include <optional>
#include <charconv>

class DoubleSpreadsheetCell : public SpreadsheetCell
{
public:
	virtual void set(double value)
	{
		m_value = value;
	}

	void set(std::string_view value) override
	{
		m_value = stringToDouble(value);
	}

	std::string getString() const override
	{
		return (m_value.has_value() ? doubleToString(m_value.value()) : "");
	}

private:
	static std::string doubleToString(double value)
	{
		return std::to_string(value);
	}

	static double stringToDouble(std::string_view value)
	{
		double number{ 0 };
		std::from_chars(value.data(), value.data() + value.size(), number);
		return number;
	}

	std::optional<double> m_value;
};
