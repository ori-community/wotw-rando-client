#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlString {
    IL2CPP_REGISTER_METHOD(0x001E6070, void, ctor_1, (app::SqlString__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E6090, void, ctor_2, (app::SqlString__Boxed * this_ptr, app::String * data, int32_t lcid, app::SqlCompareOptions__Enum compare_options))
    IL2CPP_REGISTER_METHOD(0x001E60A0, void, ctor_3, (app::SqlString__Boxed * this_ptr, app::String * data))
    IL2CPP_REGISTER_METHOD(0x001E60B0, void, ctor_4, (app::SqlString__Boxed * this_ptr, int32_t lcid, app::SqlCompareOptions__Enum compare_options, app::String * data, app::CompareInfo * cmp_info))
    IL2CPP_REGISTER_METHOD(0x001E60C0, bool, get_IsNull, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E60D0, app::String *, get_Value, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047401D8, SqlString_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E60E0, void, SetCompareInfo, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BA3B0, app::SqlString, op_Implicit, (app::String * x))
    IL2CPP_REGISTER_METHOD(0x001E60F0, app::String *, ToString, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BA3E0, app::SqlString, op_Addition, (app::SqlString x, app::SqlString y))
    IL2CPP_REGISTER_METHODINFO(0x04730CD0, SqlString_op_Addition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BA5D0, int32_t, StringCompare, (app::SqlString x, app::SqlString y))
    IL2CPP_REGISTER_METHODINFO(0x0477E818, SqlString_StringCompare__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BAA30, app::SqlBoolean, Compare, (app::SqlString x, app::SqlString y, app::EComparison__Enum ec_expected_result))
    IL2CPP_REGISTER_METHOD(0x022BABF0, app::SqlBoolean, op_Equality, (app::SqlString x, app::SqlString y))
    IL2CPP_REGISTER_METHOD(0x022BADC0, void, ValidateSqlCompareOptions, (app::SqlCompareOptions__Enum compare_options))
    IL2CPP_REGISTER_METHODINFO(0x047642B0, SqlString_ValidateSqlCompareOptions__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BAEA0, app::CompareOptions__Enum, CompareOptionsFromSqlCompareOptions, (app::SqlCompareOptions__Enum compare_options))
    IL2CPP_REGISTER_METHODINFO(0x04753B28, SqlString_CompareOptionsFromSqlCompareOptions__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6110, bool, FBinarySort, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BAFB0, int32_t, CompareBinary, (app::SqlString x, app::SqlString y))
    IL2CPP_REGISTER_METHOD(0x022BB2B0, int32_t, CompareBinary2, (app::SqlString x, app::SqlString y))
    IL2CPP_REGISTER_METHOD(0x001E6130, int32_t, CompareTo_1, (app::SqlString__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04790E18, SqlString_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6280, int32_t, CompareTo_2, (app::SqlString__Boxed * this_ptr, app::SqlString value))
    IL2CPP_REGISTER_METHOD(0x001E62B0, bool, Equals, (app::SqlString__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001E62C0, int32_t, GetHashCode, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlString__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E62D0, void, IXmlSerializable_ReadXml, (app::SqlString__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001E6400, void, IXmlSerializable_WriteXml, (app::SqlString__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x022BBBE0, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022BBD30, void, cctor, ())
    inline app::SqlString operator + (app::SqlString x, app::SqlString y) {
        return op_Addition(x, y);
    }
    inline app::SqlBoolean operator == (app::SqlString x, app::SqlString y) {
        return op_Equality(x, y);
    }
}
