#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComNativeDescriptorHandler.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/IDesigner.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/MemberDescriptor.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/RefreshEventHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/TypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::TypeDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02947440, app::IComNativeDescriptorHandler*, get_ComNativeDescriptorHandler, )
    IL2CPP_REGISTER_METHOD(0x02947530, void, set_ComNativeDescriptorHandler, app::IComNativeDescriptorHandler* value)
    IL2CPP_REGISTER_METHOD(0x02947790, app::Type*, get_ComObjectType, )
    IL2CPP_REGISTER_METHOD(0x02947830, app::Type*, get_InterfaceType, )
    IL2CPP_REGISTER_METHOD(0x029478D0, int32_t, get_MetadataVersion, )
    IL2CPP_REGISTER_METHOD(0x02947970, void, add_Refreshed, app::RefreshEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02947AB0, void, remove_Refreshed, app::RefreshEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02947BF0, app::TypeDescriptionProvider*, AddAttributes_1, app::Type* type, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x02947ED0, app::TypeDescriptionProvider*, AddAttributes_2, app::Object* instance, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x029480D0, void, AddEditorTable, app::Type* editor_base_type, app::Hashtable* table)
    IL2CPP_REGISTER_METHOD(0x02948180, void, AddProvider_1, app::TypeDescriptionProvider* provider, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02948530, void, AddProvider_2, app::TypeDescriptionProvider* provider, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x02948910, void, AddProviderTransparent_1, app::TypeDescriptionProvider* provider, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02948A50, void, AddProviderTransparent_2, app::TypeDescriptionProvider* provider, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x02948B70, void, CheckDefaultProvider, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02949340, void, CreateAssociation, app::Object* primary, app::Object* secondary)
    IL2CPP_REGISTER_METHOD(0x02949CC0, app::IDesigner*, CreateDesigner, app::IComponent* component, app::Type* designer_base_type)
    IL2CPP_REGISTER_METHOD(
        0x0294A030,
        app::EventDescriptor_1*,
        CreateEvent_1,
        app::Type* component_type,
        app::String* name,
        app::Type* type,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x0294A1B0,
        app::EventDescriptor_1*,
        CreateEvent_2,
        app::Type* component_type,
        app::EventDescriptor_1* old_event_descriptor,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x0294A3C0,
        app::Object*,
        CreateInstance,
        app::IServiceProvider* provider,
        app::Type* object_type,
        app::Type__Array* arg_types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(
        0x0294A610,
        app::PropertyDescriptor*,
        CreateProperty_1,
        app::Type* component_type,
        app::String* name,
        app::Type* type,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x0294A790,
        app::PropertyDescriptor*,
        CreateProperty_2,
        app::Type* component_type,
        app::PropertyDescriptor* old_property_descriptor,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_1, app::Type* type, app::AttributeCollection* attributes, app::AttributeCollection* debug_attributes)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_2, app::AttributeCollection* attributes, app::AttributeCollection* debug_attributes)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_3, app::AttributeCollection* attributes, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_4, app::AttributeCollection* attributes, app::Object* instance, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_5, app::TypeConverter* converter, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_6, app::TypeConverter* converter, app::Object* instance, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_7, app::EventDescriptorCollection* events, app::Type* type, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        DebugValidate_8,
        app::EventDescriptorCollection* events,
        app::Object* instance,
        app::Attribute__Array* attributes,
        bool no_custom_type_desc
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidate_9, app::PropertyDescriptorCollection* properties, app::Type* type, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        DebugValidate_10,
        app::PropertyDescriptorCollection* properties,
        app::Object* instance,
        app::Attribute__Array* attributes,
        bool no_custom_type_desc
    )
    IL2CPP_REGISTER_METHOD(0x0294ABF0, app::ArrayList*, FilterMembers, app::IList* members, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x0294AEB0, app::Object*, GetAssociation, app::Type* type, app::Object* primary)
    IL2CPP_REGISTER_METHOD(0x0294B320, app::AttributeCollection*, GetAttributes_1, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294B4E0, app::AttributeCollection*, GetAttributes_2, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294B580, app::AttributeCollection*, GetAttributes_3, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294BA00, app::IDictionary*, GetCache, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x0294BAC0, app::String*, GetClassName_1, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294BC00, app::String*, GetClassName_2, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294BCD0, app::String*, GetClassName_3, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294BD90, app::String*, GetComponentName_1, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294BED0, app::String*, GetComponentName_2, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294BFA0, app::TypeConverter*, GetConverter_1, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294C0E0, app::TypeConverter*, GetConverter_2, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294C1A0, app::TypeConverter*, GetConverter_3, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0294C260, app::EventDescriptor_1*, GetDefaultEvent_1, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294C340, app::EventDescriptor_1*, GetDefaultEvent_2, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294C480, app::EventDescriptor_1*, GetDefaultEvent_3, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294C550, app::PropertyDescriptor*, GetDefaultProperty_1, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294C630, app::PropertyDescriptor*, GetDefaultProperty_2, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294C770, app::PropertyDescriptor*, GetDefaultProperty_3, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294C840, app::ICustomTypeDescriptor*, GetDescriptor_1, app::Type* type, app::String* type_name)
    IL2CPP_REGISTER_METHOD(0x0294C960, app::ICustomTypeDescriptor*, GetDescriptor_2, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294CC10, app::ICustomTypeDescriptor*, GetExtendedDescriptor, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294CD00, app::Object*, GetEditor_1, app::Object* component, app::Type* editor_base_type)
    IL2CPP_REGISTER_METHOD(0x0294CEB0, app::Object*, GetEditor_2, app::Object* component, app::Type* editor_base_type, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294CFE0, app::Object*, GetEditor_3, app::Type* type, app::Type* editor_base_type)
    IL2CPP_REGISTER_METHOD(0x0294D110, app::EventDescriptorCollection*, GetEvents_1, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294D2D0, app::EventDescriptorCollection*, GetEvents_2, app::Type* component_type, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x0294D600, app::EventDescriptorCollection*, GetEvents_3, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294D6A0, app::EventDescriptorCollection*, GetEvents_4, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294D750, app::EventDescriptorCollection*, GetEvents_5, app::Object* component, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(
        0x0294D800,
        app::EventDescriptorCollection*,
        GetEvents_6,
        app::Object* component,
        app::Attribute__Array* attributes,
        bool no_custom_type_desc
    )
    IL2CPP_REGISTER_METHOD(0x0294DCF0, app::String*, GetExtenderCollisionSuffix, app::MemberDescriptor* member)
    IL2CPP_REGISTER_METHOD(0x0294DF50, app::String*, GetFullComponentName, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294E040, app::Type*, GetNodeForBaseType, app::Type* search_type)
    IL2CPP_REGISTER_METHOD(0x0294E170, app::PropertyDescriptorCollection*, GetProperties_1, app::Type* component_type)
    IL2CPP_REGISTER_METHOD(0x0294E330, app::PropertyDescriptorCollection*, GetProperties_2, app::Type* component_type, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x0294E660, app::PropertyDescriptorCollection*, GetProperties_3, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0294E790, app::PropertyDescriptorCollection*, GetProperties_4, app::Object* component, bool no_custom_type_desc)
    IL2CPP_REGISTER_METHOD(0x0294E850, app::PropertyDescriptorCollection*, GetProperties_5, app::Object* component, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(
        0x0294E990,
        app::PropertyDescriptorCollection*,
        GetProperties_6,
        app::Object* component,
        app::Attribute__Array* attributes,
        bool no_custom_type_desc
    )
    IL2CPP_REGISTER_METHOD(
        0x0294EA60,
        app::PropertyDescriptorCollection*,
        GetPropertiesImpl,
        app::Object* component,
        app::Attribute__Array* attributes,
        bool no_custom_type_desc,
        bool no_attributes
    )
    IL2CPP_REGISTER_METHOD(0x0294EFC0, app::TypeDescriptionProvider*, GetProvider_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0294F0B0, app::TypeDescriptionProvider*, GetProvider_2, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x0294F190, app::TypeDescriptionProvider*, GetProviderRecursive, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0294F230, app::Type*, GetReflectionType_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0294F350, app::Type*, GetReflectionType_2, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x0294F4D0, app::TypeDescriptor_TypeDescriptionNode*, NodeFor_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0294F570, app::TypeDescriptor_TypeDescriptionNode*, NodeFor_2, app::Type* type, bool create_delegator)
    IL2CPP_REGISTER_METHOD(0x0294FE60, app::TypeDescriptor_TypeDescriptionNode*, NodeFor_3, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x0294FF00, app::TypeDescriptor_TypeDescriptionNode*, NodeFor_4, app::Object* instance, bool create_delegator)
    IL2CPP_REGISTER_METHOD(0x02950230, void, NodeRemove, app::Object* key, app::TypeDescriptionProvider* provider)
    IL2CPP_REGISTER_METHOD(
        0x02950710,
        app::ICollection*,
        PipelineAttributeFilter,
        int32_t pipeline_type,
        app::ICollection* members,
        app::Attribute__Array* filter,
        app::Object* instance,
        app::IDictionary* cache
    )
    IL2CPP_REGISTER_METHOD(
        0x02950E40,
        app::ICollection*,
        PipelineFilter,
        int32_t pipeline_type,
        app::ICollection* members,
        app::Object* instance,
        app::IDictionary* cache
    )
    IL2CPP_REGISTER_METHOD(0x02952170, app::ICollection*, PipelineInitialize, int32_t pipeline_type, app::ICollection* members, app::IDictionary* cache)
    IL2CPP_REGISTER_METHOD(
        0x02952590,
        app::ICollection*,
        PipelineMerge,
        int32_t pipeline_type,
        app::ICollection* primary,
        app::ICollection* secondary,
        app::Object* instance,
        app::IDictionary* cache
    )
    IL2CPP_REGISTER_METHOD(0x029531E0, void, RaiseRefresh_1, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x02953410, void, RaiseRefresh_2, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02953620, void, Refresh_1, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x029536C0, void, Refresh_2, app::Object* component, bool refresh_reflection_provider)
    IL2CPP_REGISTER_METHOD(0x02953D60, void, Refresh_3, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02954230, void, Refresh_4, app::Module* module)
    IL2CPP_REGISTER_METHOD(0x02954AD0, void, Refresh_5, app::Assembly* assembly)
    IL2CPP_REGISTER_METHOD(0x02954BD0, void, RemoveAssociation, app::Object* primary, app::Object* secondary)
    IL2CPP_REGISTER_METHOD(0x02954ED0, void, RemoveAssociations, app::Object* primary)
    IL2CPP_REGISTER_METHOD(0x02954FD0, void, RemoveProvider_1, app::TypeDescriptionProvider* provider, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02955120, void, RemoveProvider_2, app::TypeDescriptionProvider* provider, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x02955240, void, RemoveProviderTransparent_1, app::TypeDescriptionProvider* provider, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02955440, void, RemoveProviderTransparent_2, app::TypeDescriptionProvider* provider, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x029555F0, bool, ShouldHideMember, app::MemberDescriptor* member, app::Attribute* attribute)
    IL2CPP_REGISTER_METHOD(0x029556B0, void, SortDescriptorArray, app::IList* infos)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Trace, app::String* message, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x029557E0, void, cctor, )
} // namespace app::classes::System::ComponentModel::TypeDescriptor
