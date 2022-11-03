#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::TypeExtensions {
    IL2CPP_REGISTER_METHOD(0x019E35B0, app::MemberTypes__Enum, MemberType, (app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHOD(0x03028500, bool, ContainsGenericParameters, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03028530, bool, IsInterface, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03028550, bool, IsGenericType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03028580, bool, IsGenericTypeDefinition, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD200, app::Type*, BaseType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE510, app::Assembly*, Assembly, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01A084B0, bool, IsEnum, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x030285B0, bool, IsClass, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE4E0, bool, IsSealed, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE4B0, bool, IsAbstract, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03028600, bool, IsVisible, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x02418EF0, bool, IsPrimitive, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03028620, bool, AssignableToTypeName_1, (app::Type * type, app::String* full_type_name, bool search_interfaces, app::Type** match))
    IL2CPP_REGISTER_METHOD(0x030288F0, bool, AssignableToTypeName_2, (app::Type * type, app::String* full_type_name, bool search_interfaces))
    IL2CPP_REGISTER_METHOD(0x03028910, bool, ImplementInterface, (app::Type * type, app::Type* interface_type))
} // namespace app::classes::Newtonsoft::Json::Utilities::TypeExtensions
