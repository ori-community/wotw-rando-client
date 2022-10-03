#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UWPCompat::Extensions::TypeExtensions {
    IL2CPP_REGISTER_METHOD(0x013DD200, app::Type*, BaseType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD230, app::FieldInfo_1*, GetField, (app::Type * type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013DD260, app::FieldInfo_1__Array*, GetFields_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD290, app::FieldInfo_1__Array*, GetFields_2, (app::Type * type, app::BindingFlags__Enum_1 flags))
    IL2CPP_REGISTER_METHOD(0x013DD2D0, app::Type__Array*, GetInterfaces, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD300, app::MethodInfo_1*, GetMethod_1, (app::Type * type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013DD320, app::MethodInfo_1*, GetMethod_2, (app::Type * type, app::String* name, app::Type__Array* types))
    IL2CPP_REGISTER_METHOD(0x013DD340, app::MethodInfo_1*, GetMethod_3, (app::Type * type, app::String* name, app::Object__Array* parameters))
    IL2CPP_REGISTER_METHOD(0x013DD550, app::MethodInfo_1*, GetMethod_4, (app::Type * type, app::String* name, app::BindingFlags__Enum_1 flags))
    IL2CPP_REGISTER_METHOD(0x013DD590, app::MethodInfo_1*, GetMethod_5, (app::Type * type, app::String* name, app::BindingFlags__Enum_1 flags, app::Type__Array* types))
    IL2CPP_REGISTER_METHOD(0x013DD5F0, app::PropertyInfo_1*, GetProperty, (app::Type * type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013DD610, app::PropertyInfo_1__Array*, GetProperties, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD640, app::Object*, InvokeMember, (app::Type * type, app::String* name, app::BindingFlags__Enum_1 flags, app::Object* target, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x013DD6D0, bool, IsAssignableFrom, (app::Type * type, app::Type* other))
    IL2CPP_REGISTER_METHOD(0x013DD700, bool, IsDefined_1, (app::Type * type, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x013DD710, bool, IsDefined_2, (app::Type * type, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, (app::Type * type))
} // namespace app::classes::UWPCompat::Extensions::TypeExtensions
