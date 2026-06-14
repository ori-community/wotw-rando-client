#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Xml_Serialization_XmlReflectionMember_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#include <Modloader/app/structs/XmlAttributes.h>
#include <Modloader/app/structs/XmlReflectionImporter.h>
#include <Modloader/app/structs/XmlReflectionMember.h>
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapMemberElement.h>
#include <Modloader/app/structs/XmlTypeMapping.h>

namespace app::classes::System::Xml::Serialization::XmlReflectionImporter {
    IL2CPP_REGISTER_METHOD(
        0x025A25A0,
        void,
        ctor,
        app::XmlReflectionImporter* this_ptr,
        app::XmlAttributeOverrides* attribute_overrides,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(0x025A29F0, app::XmlTypeMapping*, ImportTypeMapping_1, app::XmlReflectionImporter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x025A2A10,
        app::XmlTypeMapping*,
        ImportTypeMapping_2,
        app::XmlReflectionImporter* this_ptr,
        app::Type* type,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A2A30,
        app::XmlTypeMapping*,
        ImportTypeMapping_3,
        app::XmlReflectionImporter* this_ptr,
        app::Type* type,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A2C00,
        app::XmlTypeMapping*,
        ImportTypeMapping_4,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A31B0,
        app::XmlTypeMapping*,
        CreateTypeMapping,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_xml_type,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A39D0,
        app::XmlTypeMapping*,
        ImportClassMapping_1,
        app::XmlReflectionImporter* this_ptr,
        app::Type* type,
        app::XmlRootAttribute* root,
        app::String* default_namespace,
        bool is_base_type
    )
    IL2CPP_REGISTER_METHOD(
        0x025A3AC0,
        app::XmlTypeMapping*,
        ImportClassMapping_2,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace,
        bool is_base_type
    )
    IL2CPP_REGISTER_METHOD(
        0x025A4C60,
        void,
        RegisterDerivedMap,
        app::XmlReflectionImporter* this_ptr,
        app::XmlTypeMapping* map,
        app::XmlTypeMapping* derived_map
    )
    IL2CPP_REGISTER_METHOD(
        0x025A4E00,
        app::String*,
        GetTypeNamespace,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A5000,
        app::XmlTypeMapping*,
        ImportListMapping_1,
        app::XmlReflectionImporter* this_ptr,
        app::Type* type,
        app::XmlRootAttribute* root,
        app::String* default_namespace,
        app::XmlAttributes* atts,
        int32_t nesting_level
    )
    IL2CPP_REGISTER_METHOD(
        0x025A50E0,
        app::XmlTypeMapping*,
        ImportListMapping_2,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace,
        app::XmlAttributes* atts,
        int32_t nesting_level
    )
    IL2CPP_REGISTER_METHOD(
        0x025A6160,
        app::XmlTypeMapping*,
        ImportXmlNodeMapping,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A63A0,
        app::XmlTypeMapping*,
        ImportPrimitiveMapping,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A6490,
        app::XmlTypeMapping*,
        ImportEnumMapping,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A6C20,
        app::XmlTypeMapping*,
        ImportXmlSerializableMapping,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::XmlRootAttribute* root,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(0x025A6DB0, void, ImportIncludedTypes, app::XmlReflectionImporter* this_ptr, app::Type* type, app::String* default_namespace)
    IL2CPP_REGISTER_METHOD(
        0x025A6F30,
        app::List_1_System_Xml_Serialization_XmlReflectionMember_*,
        GetReflectionMembers,
        app::XmlReflectionImporter* this_ptr,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(
        0x025A7FF0,
        app::XmlTypeMapMember*,
        CreateMapMember,
        app::XmlReflectionImporter* this_ptr,
        app::Type* declaring_type,
        app::XmlReflectionMember* rmember,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(
        0x025A9170,
        app::XmlTypeMapElementInfoList*,
        ImportElementInfo,
        app::XmlReflectionImporter* this_ptr,
        app::Type* cls,
        app::String* default_name,
        app::String* default_namespace,
        app::Type* default_type,
        app::XmlTypeMapMemberElement* member,
        app::XmlAttributes* atts
    )
    IL2CPP_REGISTER_METHOD(
        0x025AA240,
        app::XmlTypeMapElementInfoList*,
        ImportAnyElementInfo,
        app::XmlReflectionImporter* this_ptr,
        app::String* default_namespace,
        app::XmlReflectionMember* rmember,
        app::XmlTypeMapMemberElement* member,
        app::XmlAttributes* atts
    )
    IL2CPP_REGISTER_METHOD(
        0x025AA8D0,
        void,
        ImportTextElementInfo,
        app::XmlReflectionImporter* this_ptr,
        app::XmlTypeMapElementInfoList* list,
        app::Type* default_type,
        app::XmlTypeMapMemberElement* member,
        app::XmlAttributes* atts,
        app::String* default_namespace
    )
    IL2CPP_REGISTER_METHOD(0x025AAE30, bool, CanBeNull, app::XmlReflectionImporter* this_ptr, app::TypeData* type)
    IL2CPP_REGISTER_METHOD(0x025AAE80, void, IncludeType, app::XmlReflectionImporter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x025AB2C0,
        app::Object*,
        GetDefaultValue,
        app::XmlReflectionImporter* this_ptr,
        app::TypeData* type_data,
        app::Object* default_value
    )
    IL2CPP_REGISTER_METHOD(0x025AB4B0, void, cctor, )
} // namespace app::classes::System::Xml::Serialization::XmlReflectionImporter
