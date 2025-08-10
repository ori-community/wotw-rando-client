#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IXmlDocument.h>
#include <Modloader/app/structs/IXmlElement.h>
#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Converters_IXmlNode_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNodeConverter.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlNodeConverter {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DeserializeRootElementName, app::XmlNodeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_WriteArrayAttribute, app::XmlNodeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_OmitRootObject, app::XmlNodeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_EncodeSpecialCharacters, app::XmlNodeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A5B610,
        void,
        WriteJson,
        app::XmlNodeConverter* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A5BA10, app::IXmlNode*, WrapXml, app::XmlNodeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01A5BB60, void, PushParentNamespaces, app::XmlNodeConverter* this_ptr, app::IXmlNode* node, app::XmlNamespaceManager* manager)
    IL2CPP_REGISTER_METHOD(0x01A5C180, app::String*, ResolveFullName, app::XmlNodeConverter* this_ptr, app::IXmlNode* node, app::XmlNamespaceManager* manager)
    IL2CPP_REGISTER_METHOD(0x01A5C3A0, app::String*, GetPropertyName, app::XmlNodeConverter* this_ptr, app::IXmlNode* node, app::XmlNamespaceManager* manager)
    IL2CPP_REGISTER_METHOD(0x01A5C6E0, bool, IsArray, app::XmlNodeConverter* this_ptr, app::IXmlNode* node)
    IL2CPP_REGISTER_METHOD(
        0x01A5C950,
        void,
        SerializeGroupedNodes,
        app::XmlNodeConverter* this_ptr,
        app::JsonWriter* writer,
        app::IXmlNode* node,
        app::XmlNamespaceManager* manager,
        bool write_property_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5D210,
        void,
        WriteGroupedNodes_1,
        app::XmlNodeConverter* this_ptr,
        app::JsonWriter* writer,
        app::XmlNamespaceManager* manager,
        bool write_property_name,
        app::List_1_Newtonsoft_Json_Converters_IXmlNode_* grouped_nodes,
        app::String* element_names
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5D3D0,
        void,
        WriteGroupedNodes_2,
        app::XmlNodeConverter* this_ptr,
        app::JsonWriter* writer,
        app::XmlNamespaceManager* manager,
        bool write_property_name,
        app::IXmlNode* node,
        app::String* element_names
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5D4C0,
        void,
        SerializeNode,
        app::XmlNodeConverter* this_ptr,
        app::JsonWriter* writer,
        app::IXmlNode* node,
        app::XmlNamespaceManager* manager,
        bool write_property_name
    )
    IL2CPP_REGISTER_METHOD(0x01A5E1D0, bool, AllSameName, app::IXmlNode* node)
    IL2CPP_REGISTER_METHOD(
        0x01A5E3D0,
        app::Object*,
        ReadJson,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5EE70,
        void,
        DeserializeValue,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::XmlNamespaceManager* manager,
        app::String* property_name,
        app::IXmlNode* current_node
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5F370,
        void,
        ReadElement,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::IXmlNode* current_node,
        app::String* property_name,
        app::XmlNamespaceManager* manager
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5F730,
        void,
        CreateElement_1,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::IXmlNode* current_node,
        app::String* element_name,
        app::XmlNamespaceManager* manager,
        app::String* element_prefix,
        app::Dictionary_2_System_String_System_String_* attribute_name_values
    )
    IL2CPP_REGISTER_METHOD(
        0x01A5FBE0,
        void,
        AddAttribute,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::IXmlNode* current_node,
        app::String* property_name,
        app::String* attribute_name,
        app::XmlNamespaceManager* manager,
        app::String* attribute_prefix
    )
    IL2CPP_REGISTER_METHOD(0x01A5FE50, app::String*, ConvertTokenToXmlValue, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(
        0x01A60630,
        void,
        ReadArrayElements,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::String* property_name,
        app::IXmlNode* current_node,
        app::XmlNamespaceManager* manager
    )
    IL2CPP_REGISTER_METHOD(0x01A60930, void, AddJsonArrayAttribute, app::XmlNodeConverter* this_ptr, app::IXmlElement* element, app::IXmlDocument* document)
    IL2CPP_REGISTER_METHOD(0x01A60AB0, bool, ShouldReadInto, app::XmlNodeConverter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(
        0x01A60B40,
        app::Dictionary_2_System_String_System_String_*,
        ReadAttributeElements,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::XmlNamespaceManager* manager
    )
    IL2CPP_REGISTER_METHOD(
        0x01A613D0,
        void,
        CreateInstruction,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::IXmlNode* current_node,
        app::String* property_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01A617A0,
        void,
        CreateDocumentType,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::IXmlNode* current_node
    )
    IL2CPP_REGISTER_METHOD(
        0x01A61BA0,
        app::IXmlElement*,
        CreateElement_2,
        app::XmlNodeConverter* this_ptr,
        app::String* element_name,
        app::IXmlDocument* document,
        app::String* element_prefix,
        app::XmlNamespaceManager* manager
    )
    IL2CPP_REGISTER_METHOD(
        0x01A61D40,
        void,
        DeserializeNode,
        app::XmlNodeConverter* this_ptr,
        app::JsonReader* reader,
        app::IXmlDocument* document,
        app::XmlNamespaceManager* manager,
        app::IXmlNode* current_node
    )
    IL2CPP_REGISTER_METHOD(0x01A62640, bool, IsNamespaceAttribute, app::XmlNodeConverter* this_ptr, app::String* attribute_name, app::String** prefix)
    IL2CPP_REGISTER_METHOD(0x01A62800, bool, ValueAttributes, app::XmlNodeConverter* this_ptr, app::List_1_Newtonsoft_Json_Converters_IXmlNode_* c)
    IL2CPP_REGISTER_METHOD(0x01A62A50, bool, CanConvert, app::XmlNodeConverter* this_ptr, app::Type* value_type)
    IL2CPP_REGISTER_METHOD(0x01A62B60, bool, IsXObject, app::XmlNodeConverter* this_ptr, app::Type* value_type)
    IL2CPP_REGISTER_METHOD(0x01A62C30, bool, IsXmlNode, app::XmlNodeConverter* this_ptr, app::Type* value_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlNodeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A62D00, void, cctor, )
} // namespace app::classes::Newtonsoft::Json::Converters::XmlNodeConverter
