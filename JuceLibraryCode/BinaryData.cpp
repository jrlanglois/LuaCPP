/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== 01 - Basic.lua ==================
static const unsigned char temp_binary_data_0[] =
"if \"a\" == \"b\" then\r\n"
"    print (\"If this prints, we have a problem!\")\r\n"
"elseif 7 > 3 then\r\n"
"    print (\"Lua appears to have done elementary math.\")\r\n"
"else\r\n"
"    print (\"Lua didn't go to school, it would seem.\")\r\n"
"end";

const char* _01__Basic_lua = (const char*) temp_binary_data_0;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xfd2f01c7:  numBytes = 210; return _01__Basic_lua;
        default: break;
    }

    numBytes = 0;
    return 0;
}

const char* namedResourceList[] =
{
    "_01__Basic_lua"
};

}
