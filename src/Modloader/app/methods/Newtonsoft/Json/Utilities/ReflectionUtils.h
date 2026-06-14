#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/JsonExtensionDataAttribute.h>
#include <Modloader/app/structs/List_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/NonSerializedAttribute.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/SerializableAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StructMultiKey_2_System_String_System_String_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeNameAssemblyFormatHandling__Enum.h>

namespace app::classes::Newtonsoft::Json::Utilities::ReflectionUtils {
    IL2CPP_REGISTER_METHOD(0x030208C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x03020970, bool, IsVirtual, app::PropertyInfo_1* property_info)
    IL2CPP_REGISTER_METHOD(0x03020AC0, app::MethodInfo_1*, GetBaseDefinition, app::PropertyInfo_1* property_info)
    IL2CPP_REGISTER_METHOD(0x03020BF0, bool, IsPublic, app::PropertyInfo_1* property)
    IL2CPP_REGISTER_METHOD(0x03020CE0, app::Type*, GetObjectType, app::Object* v)
    IL2CPP_REGISTER_METHOD(
        0x03020D00,
        app::String*,
        GetTypeName,
        app::Type* t,
        app::TypeNameAssemblyFormatHandling__Enum assembly_format,
        app::ISerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(0x03020F60, app::String*, GetFullyQualifiedTypeName, app::Type* t, app::ISerializationBinder* binder)
    IL2CPP_REGISTER_METHOD(0x030210E0, app::String*, RemoveAssemblyDetails, app::String* fully_qualified_type_name)
    IL2CPP_REGISTER_METHOD(0x03021350, bool, HasDefaultConstructor, app::Type* t, bool non_public)
    IL2CPP_REGISTER_METHOD(0x03021470, app::ConstructorInfo*, GetDefaultConstructor_1, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x03021510, app::ConstructorInfo*, GetDefaultConstructor_2, app::Type* t, bool non_public)
    IL2CPP_REGISTER_METHOD(0x03021720, bool, IsNullable, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x03021800, bool, IsNullableType, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x03021910, app::Type*, EnsureNotNullableType, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x030219C0, app::Type*, EnsureNotByRefType, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x03021A30, bool, IsGenericDefinition, app::Type* type, app::Type* generic_interface_definition)
    IL2CPP_REGISTER_METHOD(0x03021B20, bool, ImplementsGenericDefinition_1, app::Type* type, app::Type* generic_interface_definition)
    IL2CPP_REGISTER_METHOD(
        0x03021BE0,
        bool,
        ImplementsGenericDefinition_2,
        app::Type* type,
        app::Type* generic_interface_definition,
        app::Type** implementing_type
    )
    IL2CPP_REGISTER_METHOD(0x03021E90, bool, InheritsGenericDefinition_1, app::Type* type, app::Type* generic_class_definition)
    IL2CPP_REGISTER_METHOD(0x03021F50, bool, InheritsGenericDefinition_2, app::Type* type, app::Type* generic_class_definition, app::Type** implementing_type)
    IL2CPP_REGISTER_METHOD(
        0x03022200,
        bool,
        InheritsGenericDefinitionInternal,
        app::Type* current_type,
        app::Type* generic_class_definition,
        app::Type** implementing_type
    )
    IL2CPP_REGISTER_METHOD(0x03022350, app::Type*, GetCollectionItemType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03022640, void, GetDictionaryKeyValueTypes, app::Type* dictionary_type, app::Type** key_type, app::Type** value_type)
    IL2CPP_REGISTER_METHOD(0x03022920, app::Type*, GetMemberUnderlyingType, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(0x03022B30, bool, IsByRefLikeType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03022D40, bool, IsIndexedProperty, app::PropertyInfo_1* property)
    IL2CPP_REGISTER_METHOD(0x03022E00, app::Object*, GetMemberValue, app::MemberInfo_1* member, app::Object* target)
    IL2CPP_REGISTER_METHOD(0x030230E0, void, SetMemberValue, app::MemberInfo_1* member, app::Object* target, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x03023360, bool, CanReadMemberValue, app::MemberInfo_1* member, bool non_public)
    IL2CPP_REGISTER_METHOD(0x03023510, bool, CanSetMemberValue, app::MemberInfo_1* member, bool non_public, bool can_set_read_only)
    IL2CPP_REGISTER_METHOD(
        0x030236E0,
        app::List_1_System_Reflection_MemberInfo_*,
        GetFieldsAndProperties,
        app::Type* type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x03024200, bool, IsOverridenGenericMember, app::MemberInfo_1* member_info, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x03024460, app::Attribute__Array*, GetAttributes_1, app::Object* attribute_provider, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x03024A70, app::StructMultiKey_2_System_String_System_String_, SplitFullyQualifiedTypeName, app::String* fully_qualified_type_name)
    IL2CPP_REGISTER_METHOD(0x03024C30, app::Nullable_1_Int32_, GetAssemblyDelimiterIndex, app::String* fully_qualified_type_name)
    IL2CPP_REGISTER_METHOD(0x03024D20, app::MemberInfo_1*, GetMemberInfoFromType, app::Type* target_type, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(
        0x03025080,
        app::IEnumerable_1_System_Reflection_FieldInfo_*,
        GetFields,
        app::Type* target_type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(
        0x03025250,
        void,
        GetChildPrivateFields,
        app::IList_1_System_Reflection_MemberInfo_* initial_fields,
        app::Type* target_type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(
        0x03025500,
        app::IEnumerable_1_System_Reflection_PropertyInfo_*,
        GetProperties,
        app::Type* target_type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x030258B0, app::BindingFlags__Enum, RemoveFlag, app::BindingFlags__Enum binding_attr, app::BindingFlags__Enum flag)
    IL2CPP_REGISTER_METHOD(
        0x030258C0,
        void,
        GetChildPrivateProperties,
        app::IList_1_System_Reflection_PropertyInfo_* initial_properties,
        app::Type* target_type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x03026030, bool, IsMethodOverridden, app::Type* current_type, app::Type* method_declaring_type, app::String* method_1)
    IL2CPP_REGISTER_METHOD(0x030262A0, app::Object*, GetDefaultValue, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x015F4B10, app::Object*, GetAttribute_1, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x015F4BC0, app::Object*, GetAttribute_2, app::Object* attribute_provider, bool inherit)
    IL2CPP_REGISTER_METHOD(0x015867B0, app::Object__Array*, GetAttributes_2, app::Object* attribute_provider, bool inherit)
    IL2CPP_REGISTER_METHOD(0x015F4B10, app::JsonExtensionDataAttribute*, GetAttribute_3, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x015F4BC0, app::NonSerializedAttribute*, GetAttribute_4, app::Object* attribute_provider, bool inherit)
    IL2CPP_REGISTER_METHOD(0x015F4BC0, app::SerializableAttribute*, GetAttribute_5, app::Object* attribute_provider, bool inherit)
} // namespace app::classes::Newtonsoft::Json::Utilities::ReflectionUtils
