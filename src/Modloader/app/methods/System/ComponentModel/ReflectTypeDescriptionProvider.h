#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/EventDescriptor_1__Array.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IExtenderProvider.h>
#include <Modloader/app/structs/IExtenderProvider__Array.h>
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/ReflectTypeDescriptionProvider.h>
#include <Modloader/app/structs/ReflectTypeDescriptionProvider_ReflectedTypeData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::ReflectTypeDescriptionProvider {
    IL2CPP_REGISTER_METHOD(0x029A1850, app::Guid, get_ExtenderProviderKey, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReflectTypeDescriptionProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029A1900, app::Hashtable*, get_IntrinsicTypeConverters, )
    IL2CPP_REGISTER_METHOD(0x029A2100, void, AddEditorTable, app::Type* editor_base_type, app::Hashtable* table)
    IL2CPP_REGISTER_METHOD(
        0x029A24E0,
        app::Object*,
        CreateInstance_1,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::IServiceProvider* provider,
        app::Type* object_type,
        app::Type__Array* arg_types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x029A2750, app::Object*, CreateInstance_2, app::Type* object_type, app::Type* calling_type)
    IL2CPP_REGISTER_METHOD(0x029A28F0, app::AttributeCollection*, GetAttributes, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A2920, app::IDictionary*, GetCache, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029A2BF0, app::String*, GetClassName, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A2C30, app::String*, GetComponentName, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029A2D30, app::TypeConverter*, GetConverter, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type, app::Object* instance)
    IL2CPP_REGISTER_METHOD(
        0x029A2D70,
        app::EventDescriptor_1*,
        GetDefaultEvent,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A2DB0,
        app::PropertyDescriptor*,
        GetDefaultProperty,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A2DF0,
        app::Object*,
        GetEditor,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* type,
        app::Object* instance,
        app::Type* editor_base_type
    )
    IL2CPP_REGISTER_METHOD(0x029A2E40, app::Hashtable*, GetEditorTable, app::Type* editor_base_type)
    IL2CPP_REGISTER_METHOD(0x029A3560, app::EventDescriptorCollection*, GetEvents, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A3590, app::AttributeCollection*, GetExtendedAttributes, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029A3630, app::String*, GetExtendedClassName, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029A36A0, app::String*, GetExtendedComponentName, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029A36F0, app::TypeConverter*, GetExtendedConverter, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EventDescriptor_1*, GetExtendedDefaultEvent, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::PropertyDescriptor*,
        GetExtendedDefaultProperty,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A3750,
        app::Object*,
        GetExtendedEditor,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance,
        app::Type* editor_base_type
    )
    IL2CPP_REGISTER_METHOD(0x029A37C0, app::EventDescriptorCollection*, GetExtendedEvents, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(
        0x029A3860,
        app::PropertyDescriptorCollection*,
        GetExtendedProperties,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A3EC0,
        app::IExtenderProvider__Array*,
        GetExtenderProviders,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A4160,
        app::IExtenderProvider__Array*,
        GetExtenders,
        app::ICollection* components,
        app::Object* instance,
        app::IDictionary* cache
    )
    IL2CPP_REGISTER_METHOD(
        0x029A49F0,
        app::Object*,
        GetExtendedPropertyOwner,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance,
        app::PropertyDescriptor* pd
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::ICustomTypeDescriptor*,
        GetExtendedTypeDescriptor,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x029A4A50, app::String*, GetFullComponentName, app::ReflectTypeDescriptionProvider* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x029A4C60, app::Type__Array*, GetPopulatedTypes, app::ReflectTypeDescriptionProvider* this_ptr, app::Module* module)
    IL2CPP_REGISTER_METHOD(0x029A5100, app::PropertyDescriptorCollection*, GetProperties, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x029A5130,
        app::Object*,
        GetPropertyOwner,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* type,
        app::Object* instance,
        app::PropertyDescriptor* pd
    )
    IL2CPP_REGISTER_METHOD(
        0x00502220,
        app::Type*,
        GetReflectionType,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x029A51E0,
        app::ReflectTypeDescriptionProvider_ReflectedTypeData*,
        GetTypeData,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* type,
        bool create_if_needed
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::ICustomTypeDescriptor*,
        GetTypeDescriptor,
        app::ReflectTypeDescriptionProvider* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x029A5610, app::Type*, GetTypeFromName, app::String* type_name)
    IL2CPP_REGISTER_METHOD(0x029A5770, bool, IsPopulated, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A57C0, app::Attribute__Array*, ReflectGetAttributes_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A5E10, app::Attribute__Array*, ReflectGetAttributes_2, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(0x029A6460, app::EventDescriptor_1__Array*, ReflectGetEvents, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A6DB0, app::PropertyDescriptor__Array*, ReflectGetExtendedProperties, app::IExtenderProvider* provider)
    IL2CPP_REGISTER_METHOD(0x029A7D90, app::PropertyDescriptor__Array*, ReflectGetProperties, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A8640, void, Refresh, app::ReflectTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029A8680, app::Object*, SearchIntrinsicTable, app::Hashtable* table, app::Type* calling_type)
    IL2CPP_REGISTER_METHOD(0x029A8EA0, void, cctor, )
} // namespace app::classes::System::ComponentModel::ReflectTypeDescriptionProvider
