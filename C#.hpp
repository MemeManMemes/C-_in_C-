#include <iostream>

namespace System
{
	typedef uint8_t byte;
	typedef int8_t sbyte;
	
	
	
	
	struct
	{
		const int MaxValue = 2147483647;
		const std::string MaxHexValue = "0x7FFFFFFF";
		const int MinValue = -2147483648;
		const std::string MinHexValue = "0x80000000";
	} Int32;
	struct
	{
		const uint MaxValue = 4294967295;
		const std::string MaxHexValue = "0xFFFFFFFF";
		const uint MinValue = 0;
		const std::string MinHexValue = "0x0";
	} UInt32;
	
	
	struct
	{
		const byte MaxValue = 255;
		const std::string MaxHexValue = "0xFF";
		const byte MinValue = 0;
		const std::string MinHexValue = "0x0";
	} Byte;
	struct
	{
		const sbyte MaxValue = 127;
		const std::string MaxHexValue = "0x7F";
		const sbyte MinValue = -128;
		const std::string MinHexValue = "0x80";
	} SByte;
	
	
	struct
	{
		const long long MaxValue = 9223372036854775807;
		const std::string MaxHexValue = "0x7FFFFFFFFFFFFFFF";
		const long long MinValue = -9223372036854775808;
		const std::string MinHexValue = "0x8000000000000000";
	} Long;
	struct
	{
		const unsigned long long MaxValue = 18446744073709551615;
		const std::string MaxHexValue = "0xFFFFFFFFFFFFFFFF";
		const unsigned long long MinValue = 0;
		std::string MinHexValue = "0x0";
	} ULong;
	
	
	struct
	{
		const short MaxValue = 32767;
		const std::string MaxHexValue = "0x7FFF";
		const short MinValue = -32768;
		const std::string MinHexValue = "0x8000";
	} Short;
	struct
	{
		const ushort MaxValue = 65535;
		const std::string MaxHexValue = "0xFFFF";
		const ushort MinValue = 0;
		const std::string MinHexValue = "0x0";
	} UShort;
	
	
	
	
	class Console
	{
		public:
		template <typename T>
		static void WriteLine(T writeline)
		{
			std::cout << writeline << "\r\n";
		}
		
		
		template <typename T>
		static void Write(T write)
		{
			std::cout << write;
		}
		
		
		static std::string ReadLine()
		{
			std::string s;
			std::getline(std::cin, s);
			return s;
		}
		
		
		
		struct
		{
			std::string NewLine;
			int ErrorReturn;
		} Error;
	};
	
	
	
	
	class Convert
	{
		public:
		static int ToInt32 (const std::string String)
		{
			// checking to see if there is any errors in string
			std::string str;
			for (int y = (int)String.length() - 1; y > -1; y--)
			{
				if (!(String[y] != '\0' && String[y] != '-' && String[y] != '0' && String[y] != '1' && String[y] != '2' && String[y] != '3' && String[y] != '4' && String[y] != '5' && String[y] != '6' && String[y] != '7' && String[y] != '8' && String[y] != '9'))
				{
					if (String[y] == '-' && y != 0)
					{
						std::cout << "Error: character " << y << " in string '" << String << "' is a negative sign placed in the wrong area for some reason\nReturned could not convert error code ";
						return 69;
					}
					str += String[y];
				} 
				else {std::cout << "Error: character " << y << " in string '" << String << "' is not a number\nReturned could not convert error code ";
				return 69;}
			}
			int num = 0;
			int num0 = 1;
			// converting to a int32
			for (int i = 0; i <= (int)str.length() + 1; i++)
			{
				switch (str[i])
				{
					case '1':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0;
					break;
					case '2':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 2;
					break;
					case '3':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 3;
					break;
					case '4':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 4;
					break;
					case '5':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 5;
					break;
					case '6':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 6;
					break;
					case '7':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 7;
					break;
					case '8':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 8;
					break;
					case '9':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 9;
					break;
					case '0':
					// works by itself for some reason
					break;
					case '-':
					num *= -1;
					break;
				}
			}
			return num;
		}
		
		static long ToInt64 (std::string String)
		{
			std::string str;
			for (int y = (int)String.length() - 1; y > -1; y--)
			{
				if (!(String[y] != '\0' && String[y] != '-' && String[y] != '0' && String[y] != '1' && String[y] != '2' && String[y] != '3' && String[y] != '4' && String[y] != '5' && String[y] != '6' && String[y] != '7' && String[y] != '8' && String[y] != '9'))
				{
					if (String[y] == '-' && y != 0)
					{
						std::cout << "Error: character " << y << " in string '" << String << "' is a negative sign placed in the wrong area for some reason\nReturned could not convert error code ";
						return 69;
					}
					str += String[y];
				} 
				else {std::cout << "Error: character " << y << " in string '" << String << "' is not a number\nReturned could not convert error code ";
				return 69;}
			}
			long num = 0;
			long num0 = 1;
			for (int i = 0; i <= (int)str.length() + 1; i++)
			{
				switch (str[i])
				{
					case '1':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0;
					break;
					case '2':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 2;
					break;
					case '3':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 3;
					break;
					case '4':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 4;
					break;
					case '5':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 5;
					break;
					case '6':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 6;
					break;
					case '7':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 7;
					break;
					case '8':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 8;
					break;
					case '9':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 9;
					break;
					case '0':
					// works by itself for some reason
					break;
					case '-':
					num *= -1;
					break;
				}
			}
			return num;
		}
		
		static short ToInt16(std::string String)
		{
			// checking to see if there is any errors in string
			std::string str;
			for (int y = (int)String.length() - 1; y > -1; y--)
			{
				if (!(String[y] != '\0' && String[y] != '-' && String[y] != '0' && String[y] != '1' && String[y] != '2' && String[y] != '3' && String[y] != '4' && String[y] != '5' && String[y] != '6' && String[y] != '7' && String[y] != '8' && String[y] != '9'))
				{
					if (String[y] == '-' && y != 0)
					{
						std::cout << "Error: character " << y << " in string '" << String << "' is a negative sign placed in the wrong area for some reason\nReturned could not convert error code ";
						return 69;
					}
					str += String[y];
				} 
				else {std::cout << "Error: character " << y << " in string '" << String << "' is not a number\nReturned could not convert error code ";
				return 69;}
			}
			short num = 0;
			short num0 = 1;
			// converting to a int16
			for (int i = 0; i <= (int)str.length() + 1; i++)
			{
				switch (str[i])
				{
					case '1':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0;
					break;
					case '2':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 2;
					break;
					case '3':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 3;
					break;
					case '4':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 4;
					break;
					case '5':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 5;
					break;
					case '6':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 6;
					break;
					case '7':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 7;
					break;
					case '8':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 8;
					break;
					case '9':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 9;
					break;
					case '0':
					// works by itself for some reason
					break;
					case '-':
					num *= -1;
					break;
				}
			}
			return num;
		}
		
		static bool ToBoolean(signed char Char)
		{
			if (Char != 0)
			{
				return true;
			}
			else return false;
		}
		
		static char ToChar(unsigned long Long)
		{
			return char(Long);
		}
		
		static byte ToByte(std::string String)
		{
			// checking to see if there is any errors in string
			std::string str;
			for (int y = (int)String.length() - 1; y > -1; y--)
			{
				if (!(String[y] != '\0' && String[y] != '-' && String[y] != '0' && String[y] != '1' && String[y] != '2' && String[y] != '3' && String[y] != '4' && String[y] != '5' && String[y] != '6' && String[y] != '7' && String[y] != '8' && String[y] != '9'))
				{
					if (String[y] == '-' && y != 0)
					{
						std::cout << "Error: character " << y << " in string '" << String << "' is a negative sign placed in the wrong area for some reason\nReturned could not convert error code ";
						return 69;
					}
					str += String[y];
				} 
				else {std::cout << "Error: character " << y << " in string '" << String << "' is not a number\nReturned could not convert error code ";
				return 69;}
			}
			byte num = 0;
			byte num0 = 1;
			// converting to a byte
			for (int i = 0; i <= (int)str.length() + 1; i++)
			{
				switch (str[i])
				{
					case '1':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0;
					break;
					case '2':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 2;
					break;
					case '3':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 3;
					break;
					case '4':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 4;
					break;
					case '5':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 5;
					break;
					case '6':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 6;
					break;
					case '7':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 7;
					break;
					case '8':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 8;
					break;
					case '9':
					num0 = 1;
					for (int j = 0; j > i * -1; j--)
					{
						num0 *= 10;
					}
					num += num0 * 9;
					break;
					case '0':
					// works by itself for some reason
					break;
					case '-':
					num *= -1;
					break;
				}
			}
			return num;
		}
	};
};
