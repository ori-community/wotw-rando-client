#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_ConstructorInfo_.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate.h>
#include <Modloader/app/structs/ReflectionUtils_GetDelegate.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/ReflectionUtils_SetDelegate.h>
#include <Modloader/app/structs/ReflectionUtils_1.h>

namespace app::classes::PlayFab::Json::ReflectionUtils {
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Type*, GetTypeInfo, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850220, app::Attribute*, GetAttribute_1, (app::MemberInfo_1 * info, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01850360, app::Type*, GetGenericListElementType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x018506D0, app::Attribute*, GetAttribute_2, (app::Type * object_type, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x018507D0, app::Type__Array*, GetGenericTypeArguments, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850800, bool, IsTypeGeneric, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x018508B0, bool, IsTypeGenericeCollectionInterface, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850A40, bool, IsAssignableFrom, (app::Type * type1, app::Type* type2))
    IL2CPP_REGISTER_METHOD(0x01850B00, bool, IsTypeDictionary, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850CC0, bool, IsNullableType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850DE0, app::Object*, ToNullableType, (app::Object * obj, app::Type* nullable_type))
    IL2CPP_REGISTER_METHOD(0x01850EE0, bool, IsValueType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850F90, app::IEnumerable_1_System_Reflection_ConstructorInfo_*, GetConstructors, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01850FC0, app::ConstructorInfo*, GetConstructorInfo, (app::Type * type, app::Type__Array* args_type))
    IL2CPP_REGISTER_METHOD(0x018512D0, app::IEnumerable_1_System_Reflection_PropertyInfo_*, GetProperties, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01851300, app::IEnumerable_1_System_Reflection_FieldInfo_*, GetFields, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01851330, app::MethodInfo_1*, GetGetterMethodInfo, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01851360, app::MethodInfo_1*, GetSetterMethodInfo, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01851390, app::ReflectionUtils_ConstructorDelegate*, GetContructor_1, (app::ConstructorInfo * constructor_info))
    IL2CPP_REGISTER_METHOD(0x01851430, app::ReflectionUtils_ConstructorDelegate*, GetContructor_2, (app::Type * type, app::Type__Array* args_type))
    IL2CPP_REGISTER_METHOD(0x018515C0, app::ReflectionUtils_ConstructorDelegate*, GetConstructorByReflection_1, (app::ConstructorInfo * constructor_info))
    IL2CPP_REGISTER_METHOD(0x018517E0, app::ReflectionUtils_ConstructorDelegate*, GetConstructorByReflection_2, (app::Type * type, app::Type__Array* args_type))
    IL2CPP_REGISTER_METHOD(0x018518F0, app::ReflectionUtils_GetDelegate*, GetGetMethod_1, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01851990, app::ReflectionUtils_GetDelegate*, GetGetMethod_2, (app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x01851A30, app::ReflectionUtils_GetDelegate*, GetGetMethodByReflection_1, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01851C90, app::ReflectionUtils_GetDelegate*, GetGetMethodByReflection_2, (app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x01851EB0, app::ReflectionUtils_SetDelegate*, GetSetMethod_1, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01851F50, app::ReflectionUtils_SetDelegate*, GetSetMethod_2, (app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x01851FF0, app::ReflectionUtils_SetDelegate*, GetSetMethodByReflection_1, (app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x01852250, app::ReflectionUtils_SetDelegate*, GetSetMethodByReflection_2, (app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReflectionUtils_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01852470, void, cctor, ())
} // namespace app::classes::PlayFab::Json::ReflectionUtils
