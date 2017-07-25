//By M. Kobeissi
#pragma once
#pragma warning(disable : 4244 4305 4309)
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Convert
{
private:
	static string convertBase(int, int);
public:
	static bool ToBoolean(bool);
	static bool ToBoolean(uint8_t);
	static bool ToBoolean(char);
	static bool ToBoolean(double);
	static bool ToBoolean(int16_t);
	static bool ToBoolean(int32_t);
	static bool ToBoolean(int64_t);
	static bool ToBoolean(int8_t);
	static bool ToBoolean(float);
	static bool ToBoolean(string);
	static bool ToBoolean(char*);
	static bool ToBoolean(uint16_t);
	static bool ToBoolean(uint32_t);
	static bool ToBoolean(uint64_t);
	static uint8_t ToByte(bool);
	static uint8_t ToByte(uint8_t);
	static uint8_t ToByte(char);
	static uint8_t ToByte(double);
	static uint8_t ToByte(int16_t);
	static uint8_t ToByte(int32_t);
	static uint8_t ToByte(int64_t);
	static uint8_t ToByte(int8_t);
	static uint8_t ToByte(float);
	static uint8_t ToByte(string);
	static uint8_t ToByte(char*);
	static uint8_t ToByte(string, int32_t);
	static uint8_t ToByte(uint16_t);
	static uint8_t ToByte(uint32_t);
	static uint8_t ToByte(uint64_t);
	static char ToChar(bool);
	static char ToChar(uint8_t);
	static char ToChar(char);
	static char ToChar(double);
	static char ToChar(int16_t);
	static char ToChar(int32_t);
	static char ToChar(int64_t);
	static char ToChar(int8_t);
	static char ToChar(float);
	static char ToChar(string);
	static char ToChar(char*);
	static char ToChar(uint16_t);
	static char ToChar(uint32_t);
	static char ToChar(uint64_t);
	static double ToDouble(bool);
	static double ToDouble(uint8_t);
	static double ToDouble(char);
	static double ToDouble(double);
	static double ToDouble(int16_t);
	static double ToDouble(int32_t);
	static double ToDouble(int64_t);
	static double ToDouble(int8_t);
	static double ToDouble(float);
	static double ToDouble(string);
	static double ToDouble(char*);
	static double ToDouble(uint16_t);
	static double ToDouble(uint32_t);
	static double ToDouble(uint64_t);
	static int16_t ToInt16(bool);
	static int16_t ToInt16(uint8_t);
	static int16_t ToInt16(char);
	static int16_t ToInt16(double);
	static int16_t ToInt16(int16_t);
	static int16_t ToInt16(int32_t);
	static int16_t ToInt16(int64_t);
	static int16_t ToInt16(int8_t);
	static int16_t ToInt16(float);
	static int16_t ToInt16(string);
	static int16_t ToInt16(char*);
	static int16_t ToInt16(string, int32_t);
	static int16_t ToInt16(uint16_t);
	static int16_t ToInt16(uint32_t);
	static int16_t ToInt16(uint64_t);
	static int32_t ToInt32(bool);
	static int32_t ToInt32(uint8_t);
	static int32_t ToInt32(char);
	static int32_t ToInt32(double);
	static int32_t ToInt32(int16_t);
	static int32_t ToInt32(int32_t);
	static int32_t ToInt32(int64_t);
	static int32_t ToInt32(int8_t);
	static int32_t ToInt32(float);
	static int32_t ToInt32(string);
	static int32_t ToInt32(char*);
	static int32_t ToInt32(string, int32_t);
	static int32_t ToInt32(uint16_t);
	static int32_t ToInt32(uint32_t);
	static int32_t ToInt32(uint64_t);
	static int64_t ToInt64(bool);
	static int64_t ToInt64(uint8_t);
	static int64_t ToInt64(char);
	static int64_t ToInt64(double);
	static int64_t ToInt64(int16_t);
	static int64_t ToInt64(int32_t);
	static int64_t ToInt64(int64_t);
	static int64_t ToInt64(int8_t);
	static int64_t ToInt64(float);
	static int64_t ToInt64(string);
	static int64_t ToInt64(char*);
	static int64_t ToInt64(string, int32_t);
	static int64_t ToInt64(uint16_t);
	static int64_t ToInt64(uint32_t);
	static int64_t ToInt64(uint64_t);
	static int ToInt(bool);
	static int ToInt(uint8_t);
	static int ToInt(char);
	static int ToInt(double);
	static int ToInt(int16_t);
	static int ToInt(int32_t);
	static int ToInt(int64_t);
	static int ToInt(int8_t);
	static int ToInt(float);
	static int ToInt(string);
	static int ToInt(char*);
	static int ToInt(string, int32_t);
	static int ToInt(uint16_t);
	static int ToInt(uint32_t);
	static int ToInt(uint64_t);
	static int8_t ToSByte(bool);
	static int8_t ToSByte(int8_t);
	static int8_t ToSByte(char);
	static int8_t ToSByte(double);
	static int8_t ToSByte(int16_t);
	static int8_t ToSByte(int32_t);
	static int8_t ToSByte(int64_t);
	static int8_t ToSByte(uint8_t);
	static int8_t ToSByte(float);
	static int8_t ToSByte(string);
	static int8_t ToSByte(char*);
	static int8_t ToSByte(string, int32_t);
	static int8_t ToSByte(uint16_t);
	static int8_t ToSByte(uint32_t);
	static int8_t ToSByte(uint64_t);
	static float ToSingle(int32_t);
	static float ToSingle(bool);
	static float ToSingle(uint8_t);
	static float ToSingle(char);
	static float ToSingle(double);
	static float ToSingle(int16_t);
	static float ToSingle(int64_t);
	static float ToSingle(int8_t);
	static float ToSingle(float);
	static float ToSingle(string);
	static float ToSingle(char*);
	static float ToSingle(uint16_t);
	static float ToSingle(uint32_t);
	static float ToSingle(uint64_t);
	static float ToFloat(bool);
	static float ToFloat(uint8_t);
	static float ToFloat(char);
	static float ToFloat(double);
	static float ToFloat(int16_t);
	static float ToFloat(int32_t);
	static float ToFloat(int64_t);
	static float ToFloat(int8_t);
	static float ToFloat(float);
	static float ToFloat(string);
	static float ToFloat(char*);
	static float ToFloat(uint16_t);
	static float ToFloat(uint32_t);
	static float ToFloat(uint64_t);
	static string ToString(int32_t);
	static string ToString(bool);
	static string ToString(uint8_t);
	static string ToString(uint32_t, int32_t);
	static string ToString(char);
	static string ToString(double);
	static string ToString(int16_t);
	static string ToString(int16_t, int32_t);
	static string ToString(int32_t, int32_t);
	static string ToString(int64_t);
	static string ToString(int64_t, int32_t);
	static string ToString(int8_t);
	static string ToString(float);
	static string ToString(string);
	static string ToString(char*);
	static string ToString(uint16_t);
	static string ToString(uint32_t);
	static string ToString(uint64_t);
	static uint16_t ToUInt16(bool);
	static uint16_t ToUInt16(uint8_t);
	static uint16_t ToUInt16(char);
	static uint16_t ToUInt16(double);
	static uint16_t ToUInt16(int16_t);
	static uint16_t ToUInt16(int32_t);
	static uint16_t ToUInt16(int64_t);
	static uint16_t ToUInt16(int8_t);
	static uint16_t ToUInt16(float);
	static uint16_t ToUInt16(string);
	static uint16_t ToUInt16(char*);
	static uint16_t ToUInt16(string, int32_t);
	static uint16_t ToUInt16(uint16_t);
	static uint16_t ToUInt16(uint32_t);
	static uint16_t ToUInt16(uint64_t);
	static uint32_t ToUInt32(bool);
	static uint32_t ToUInt32(uint8_t);
	static uint32_t ToUInt32(char);
	static uint32_t ToUInt32(double);
	static uint32_t ToUInt32(int16_t);
	static uint32_t ToUInt32(int32_t);
	static uint32_t ToUInt32(int64_t);
	static uint32_t ToUInt32(int8_t);
	static uint32_t ToUInt32(float);
	static uint32_t ToUInt32(string);
	static uint32_t ToUInt32(char*);
	static uint32_t ToUInt32(string, uint32_t);
	static uint32_t ToUInt32(uint16_t);
	static uint32_t ToUInt32(uint32_t);
	static uint32_t ToUInt32(uint64_t);
	static uint64_t ToUInt64(bool);
	static uint64_t ToUInt64(uint8_t);
	static uint64_t ToUInt64(char);
	static uint64_t ToUInt64(double);
	static uint64_t ToUInt64(int16_t);
	static uint64_t ToUInt64(int32_t);
	static uint64_t ToUInt64(int64_t);
	static uint64_t ToUInt64(int8_t);
	static uint64_t ToUInt64(float);
	static uint64_t ToUInt64(string);
	static uint64_t ToUInt64(char*);
	static uint64_t ToUInt64(string, int32_t);
	static uint64_t ToUInt64(uint16_t);
	static uint64_t ToUInt64(uint32_t);
	static uint64_t ToUInt64(uint64_t);
};

inline string Convert::convertBase(int value, int base)
{
	string val;
	while (value >= 1)
	{
		int remainder = value % base;
		ostringstream tempString;
		tempString << remainder;
		val += tempString.str();
		value /= base;
	}
	reverse(val.begin(), val.end());
	return val;
}

inline bool Convert::ToBoolean(bool value)
{
	return value;
}

inline bool Convert::ToBoolean(uint8_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(char value)
{
	throw exception("InvalidCastException");
	return false;
}

inline bool Convert::ToBoolean(double value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(int16_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(int32_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(int64_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(int8_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(float value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(string value)
{
	return value == "TrueString" ? true : false;
}

inline bool Convert::ToBoolean(char *value)
{
	string finalValue = value;
	return ToBoolean(finalValue);
}

inline bool Convert::ToBoolean(uint16_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(uint32_t value)
{
	return value != 0 ? true : false;
}

inline bool Convert::ToBoolean(uint64_t value)
{
	return value != 0 ? true : false;
}

inline uint8_t Convert::ToByte(bool value)
{
	return (value == true) ? '1' : '0';
}

inline uint8_t Convert::ToByte(uint8_t value)
{
	return value;
}

inline uint8_t Convert::ToByte(char value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(double value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(int16_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(int32_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(int64_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(int8_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(float value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(string value)
{
	return (uint8_t)atoi(value.c_str());
}

inline uint8_t Convert::ToByte(char *value)
{
	string finalValue = value;
	return ToByte(finalValue);
}

inline uint8_t Convert::ToByte(string value, int32_t base)
{
	string answer = convertBase(Convert::ToByte(value), base);
	return (uint8_t)atoi(answer.c_str());
}

inline uint8_t Convert::ToByte(uint16_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(uint32_t value)
{
	return (uint8_t)value;
}

inline uint8_t Convert::ToByte(uint64_t value)
{
	return (uint8_t)value;
}

inline char Convert::ToChar(bool value)
{
	throw exception("InvalidCastException");
	return ' ';
}

inline char Convert::ToChar(uint8_t value)
{
	return (char)value;
}

inline char Convert::ToChar(char value)
{
	return value;
}

inline char Convert::ToChar(double value)
{
	throw exception("InvalidCastException");
	return ' ';
}

inline char Convert::ToChar(int16_t value)
{
	return (char)value;
}

inline char Convert::ToChar(int32_t value)
{
	return (char)value;
}

inline char Convert::ToChar(int64_t value)
{
	return (char)value;
}

inline char Convert::ToChar(int8_t value)
{
	return (char)value;
}

inline char Convert::ToChar(float value)
{
	throw exception("InvalidCastException");
	return ' ';
}

inline char Convert::ToChar(string value)
{
	return value[0];
}

inline char Convert::ToChar(char *value)
{
	string finalValue = value;
	return ToChar(finalValue);
}

inline char Convert::ToChar(uint16_t value)
{
	return (char)value;
}

inline char Convert::ToChar(uint32_t value)
{
	return (char)value;
}

inline char Convert::ToChar(uint64_t value)
{
	return (char)value;
}

inline double Convert::ToDouble(bool value)
{
	return value == true ? 1 : 0;
}

inline double Convert::ToDouble(uint8_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(char value)
{
	throw exception("InvalidCastException");
	return ' ';
}

inline double Convert::ToDouble(double value)
{
	return value;
}

inline double Convert::ToDouble(int16_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(int32_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(int64_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(int8_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(float value)
{
	return (double)value;
}

inline double Convert::ToDouble(string value)
{
	return stod(value);
}

inline double Convert::ToDouble(char *value)
{
	string finalValue = value;
	return ToDouble(finalValue);
}

inline double Convert::ToDouble(uint16_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(uint32_t value)
{
	return (double)value;
}

inline double Convert::ToDouble(uint64_t value)
{
	return (double)value;
}

inline int16_t Convert::ToInt16(bool value)
{
	return value == true ? 1 : 0;
}

inline int16_t Convert::ToInt16(uint8_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(char value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(double value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(int16_t value)
{
	return value;
}

inline int16_t Convert::ToInt16(int32_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(int64_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(int8_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(float value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(string value)
{
	return (int16_t)atoi(value.c_str());
}

inline int16_t Convert::ToInt16(char *value)
{
	string finalValue = value;
	return ToInt16(finalValue);
}

inline int16_t Convert::ToInt16(string value, int32_t base)
{
	string answer = convertBase(Convert::ToInt16(value), base);
	return (int16_t)atoi(answer.c_str());
}

inline int16_t Convert::ToInt16(uint16_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(uint32_t value)
{
	return (int16_t)value;
}

inline int16_t Convert::ToInt16(uint64_t value)
{
	return (int16_t)value;
}

inline int32_t Convert::ToInt32(bool value)
{
	return value == true ? 1 : 0;
}

inline int32_t Convert::ToInt32(uint8_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(char value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(double value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(int16_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(int32_t value)
{
	return value;
}

inline int32_t Convert::ToInt32(int64_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(int8_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(float value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(string value)
{
	return atoi(value.c_str());
}

inline int32_t Convert::ToInt32(char *value)
{
	string finalValue = value;
	return ToInt32(finalValue);
}

inline int32_t Convert::ToInt32(string value, int32_t base)
{
	string answer = convertBase(Convert::ToInt32(value), base);
	return atoi(answer.c_str());
}

inline int32_t Convert::ToInt32(uint16_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(uint32_t value)
{
	return (int32_t)value;
}

inline int32_t Convert::ToInt32(uint64_t value)
{
	return (int32_t)value;
}

inline int64_t Convert::ToInt64(bool value)
{
	return value == true ? 1 : 0;
}

inline int64_t Convert::ToInt64(uint8_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(char value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(double value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(int16_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(int32_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(int64_t value)
{
	return value;
}

inline int64_t Convert::ToInt64(int8_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(float value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(string value)
{
	return (int64_t)atoi(value.c_str());
}

inline int64_t Convert::ToInt64(char *value)
{
	string finalValue = value;
	return ToInt64(finalValue);
}

inline int64_t Convert::ToInt64(string value, int32_t base)
{
	string answer = convertBase(Convert::ToInt64(value), base);
	return (int64_t)atoi(answer.c_str());
}

inline int64_t Convert::ToInt64(uint16_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(uint32_t value)
{
	return (int64_t)value;
}

inline int64_t Convert::ToInt64(uint64_t value)
{
	return (int64_t)value;
}

inline int Convert::ToInt(bool value)
{
	return value == true ? 1 : 0;
}

inline int Convert::ToInt(uint8_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(char value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(double value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(int16_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(int32_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(int64_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(float value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(string value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(char *value)
{
	string finalValue = value;
	return ToInt(finalValue);
}

inline int Convert::ToInt(string value, int32_t base)
{
	return Convert::ToInt32(value, base);
}

inline int Convert::ToInt(uint16_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(uint32_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(uint64_t value)
{
	return Convert::ToInt32(value);
}

inline int Convert::ToInt(int8_t value)
{
	return Convert::ToInt32(value);
}

inline int8_t Convert::ToSByte(bool value)
{
	return value == true ? 1 : 0;
}

inline int8_t Convert::ToSByte(double value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(int16_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(int32_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(int64_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(uint8_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(int8_t value)
{
	return value;
}

inline int8_t Convert::ToSByte(char value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(float value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(string value)
{
	return (int8_t)atoi(value.c_str());
}

inline int8_t Convert::ToSByte(char *value)
{
	string finalValue = value;
	return ToSByte(finalValue);
}

inline int8_t Convert::ToSByte(string value, int32_t base)
{
	string answer = convertBase(Convert::ToSByte(value), base);
	return (int8_t)atoi(answer.c_str());
}

inline int8_t Convert::ToSByte(uint16_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(uint32_t value)
{
	return (int8_t)value;
}

inline int8_t Convert::ToSByte(uint64_t value)
{
	return (int8_t)value;
}

inline float Convert::ToSingle(int32_t value)
{
	return (int8_t)value;
}

inline float Convert::ToSingle(bool value)
{
	return value == true ? 1 : 0;
}

inline float Convert::ToSingle(uint8_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(char value)
{
	throw exception("InvalidCastException");
	return 0.0;
}

inline float Convert::ToSingle(double value)
{
	return (float)value;
}

inline float Convert::ToSingle(int16_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(int64_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(int8_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(float value)
{
	return value;
}

inline float Convert::ToSingle(string value)
{
	return stof(value.c_str());
}

inline float Convert::ToSingle(char *value)
{
	string finalValue = value;
	return ToSingle(finalValue);
}

inline float Convert::ToSingle(uint16_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(uint32_t value)
{
	return (float)value;
}

inline float Convert::ToSingle(uint64_t value)
{
	return (float)value;
}

inline float Convert::ToFloat(bool value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(uint8_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(char value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(double value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(int16_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(int32_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(int64_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(int8_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(float value)
{
	return value;
}

inline float Convert::ToFloat(string value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(char *value)
{
	string finalValue = value;
	return ToFloat(finalValue);
}

inline float Convert::ToFloat(uint16_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(uint32_t value)
{
	return ToSingle(value);
}

inline float Convert::ToFloat(uint64_t value)
{
	return ToSingle(value);
}

inline string Convert::ToString(int32_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(bool value)
{
	string boolean = value ? "true" : "false";
	return boolean;
}

inline string Convert::ToString(uint8_t value)
{
	ostringstream tempString;
	tempString << (int)value;
	return tempString.str();
}

inline string Convert::ToString(uint32_t value, int32_t base)
{
	if (base != 2 && base != 8 && base != 10 && base != 16)
	{
		throw exception("Invalid base!");
	}
	return convertBase(value, base);
}

inline string Convert::ToString(char value)
{
	string stringValue(1, value);
	return stringValue;
}

inline string Convert::ToString(double value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(int16_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(int16_t value, int32_t base)
{
	if (base != 2 && base != 8 && base != 10 && base != 16)
	{
		throw exception("Invalid base!");
	}
	return convertBase(value, base);
}

inline string Convert::ToString(int32_t value, int32_t base)
{
	if (base != 2 && base != 8 && base != 10 && base != 16)
	{
		throw exception("Invalid base!");
	}
	return convertBase(value, base);
}

inline string Convert::ToString(int64_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(int64_t value, int32_t base)
{
	if (base != 2 && base != 8 && base != 10 && base != 16)
	{
		throw exception("Invalid base!");
	}
	return convertBase(value, base);
}

inline string Convert::ToString(int8_t value)
{
	ostringstream tempString;
	tempString << (int)value;
	return tempString.str();
}

inline string Convert::ToString(float value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(string value)
{
	return value;
}

inline string Convert::ToString(char *value)
{
	string finalValue = value;
	return ToString(finalValue);
}

inline string Convert::ToString(uint16_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(uint32_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline string Convert::ToString(uint64_t value)
{
	ostringstream tempString;
	tempString << value;
	return tempString.str();
}

inline uint16_t Convert::ToUInt16(bool value)
{
	return value == true ? 1 : 0;
}

inline uint16_t Convert::ToUInt16(uint8_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(char value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(double value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(int16_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(int32_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(int64_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(int8_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(float value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(string value)
{
	return (uint16_t)atoi(value.c_str());
}

inline uint16_t Convert::ToUInt16(char *value)
{
	string finalValue = value;
	return ToUInt16(finalValue);
}

inline uint16_t Convert::ToUInt16(string value, int32_t base)
{
	string answer = convertBase(Convert::ToUInt16(value), base);
	return (uint16_t)atoi(answer.c_str());
}

inline uint16_t Convert::ToUInt16(uint16_t value)
{
	return value;
}

inline uint16_t Convert::ToUInt16(uint32_t value)
{
	return (uint16_t)value;
}

inline uint16_t Convert::ToUInt16(uint64_t value)
{
	return (uint16_t)value;
}

inline uint32_t Convert::ToUInt32(bool value)
{
	return value == true ? 1 : 0;
}

inline uint32_t Convert::ToUInt32(uint8_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(char value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(double value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(int16_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(int32_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(int64_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(int8_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(float value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(string value)
{
	return (uint32_t)atoi(value.c_str());
}

inline uint32_t Convert::ToUInt32(char *value)
{
	string finalValue = value;
	return ToUInt32(finalValue);
}

inline uint32_t Convert::ToUInt32(string value, uint32_t base)
{
	string answer = convertBase(Convert::ToUInt32(value), base);
	return (uint32_t)atoi(answer.c_str());
}

inline uint32_t Convert::ToUInt32(uint16_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(uint32_t value)
{
	return (uint32_t)value;
}

inline uint32_t Convert::ToUInt32(uint64_t value)
{
	return (uint32_t)value;
}

inline uint64_t Convert::ToUInt64(bool value)
{
	return value == true ? 1 : 0;
}

inline uint64_t Convert::ToUInt64(uint8_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(char value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(double value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(int16_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(int32_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(int64_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(int8_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(float value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(string value)
{
	return (uint64_t)atoi(value.c_str());
}

inline uint64_t Convert::ToUInt64(char *value)
{
	string finalValue = value;
	return ToUInt64(finalValue);
}

inline uint64_t Convert::ToUInt64(string value, int32_t base)
{
	string answer = convertBase(Convert::ToUInt64(value), base);
	return (uint64_t)atoi(answer.c_str());
}

inline uint64_t Convert::ToUInt64(uint16_t value)
{
	return (uint64_t)value;
}

inline uint64_t Convert::ToUInt64(uint32_t value)
{
	return (uint64_t)value;
}

uint64_t Convert::ToUInt64(uint64_t value)
{
	return (uint64_t)value;
}