#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IXmlSerializable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSerializationReadCallback.h>
#include <Modloader/app/structs/XmlSerializationReader.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionItemFixup.h>
#include <Modloader/app/structs/XmlSerializationReader_Fixup.h>
#include <Modloader/app/structs/XmlSerializationReader_WriteCallbackInfo.h>
#include <Modloader/app/structs/XmlSerializer.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationReader {
    IL2CPP_REGISTER_METHOD(0x025AC6A0, void, Initialize, app::XmlSerializationReader* this_ptr, app::XmlReader* reader, app::XmlSerializer* event_source)
    IL2CPP_REGISTER_METHOD(0x025ACAE0, app::ArrayList*, EnsureArrayList, app::XmlSerializationReader* this_ptr, app::ArrayList* list)
    IL2CPP_REGISTER_METHOD(0x025ACC40, app::Hashtable*, EnsureHashtable, app::XmlSerializationReader* this_ptr, app::Hashtable* hash)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025ACDB0, app::XmlDocument*, get_Document, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlReader*, get_Reader, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025ACF40, void, AddFixup_1, app::XmlSerializationReader* this_ptr, app::XmlSerializationReader_CollectionFixup* fixup)
    IL2CPP_REGISTER_METHOD(0x025AD010, void, AddFixup_2, app::XmlSerializationReader* this_ptr, app::XmlSerializationReader_Fixup* fixup)
    IL2CPP_REGISTER_METHOD(0x025AD060, void, AddFixup_3, app::XmlSerializationReader* this_ptr, app::XmlSerializationReader_CollectionItemFixup* fixup)
    IL2CPP_REGISTER_METHOD(
        0x025AD0B0,
        void,
        AddReadCallback,
        app::XmlSerializationReader* this_ptr,
        app::String* name,
        app::String* ns,
        app::Type* type,
        app::XmlSerializationReadCallback* read
    )
    IL2CPP_REGISTER_METHOD(0x025AD340, void, AddTarget, app::XmlSerializationReader* this_ptr, app::String* id, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x025AD410, app::String*, CurrentTag, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AD5E0, app::Exception*, CreateReadOnlyCollectionException, app::XmlSerializationReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x025AD790,
        app::Exception*,
        CreateUnknownConstantException,
        app::XmlSerializationReader* this_ptr,
        app::String* value,
        app::Type* enum_type
    )
    IL2CPP_REGISTER_METHOD(0x025AD950, app::Exception*, CreateUnknownNodeException, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025ADAC0, app::Exception*, CreateUnknownTypeException, app::XmlSerializationReader* this_ptr, app::XmlQualifiedName* type)
    IL2CPP_REGISTER_METHOD(
        0x025ADE70,
        app::Array*,
        EnsureArrayIndex,
        app::XmlSerializationReader* this_ptr,
        app::Array* a,
        int32_t index,
        app::Type* element_type
    )
    IL2CPP_REGISTER_METHOD(0x025ADF00, bool, GetNullAttr, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025ADFF0, app::Object*, GetTarget, app::XmlSerializationReader* this_ptr, app::String* id)
    IL2CPP_REGISTER_METHOD(0x025AE1C0, bool, TargetReady, app::XmlSerializationReader* this_ptr, app::String* id)
    IL2CPP_REGISTER_METHOD(0x025AE1E0, app::XmlQualifiedName*, GetXsiType, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AE620, bool, IsXmlnsAttribute, app::XmlSerializationReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025AE6F0, void, ParseWsdlArrayType, app::XmlSerializationReader* this_ptr, app::XmlAttribute* attr)
    IL2CPP_REGISTER_METHOD(0x025AE930, app::XmlQualifiedName*, ReadElementQualifiedName, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AEA90, void, ReadEndElement, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AEB60, bool, ReadNull, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AED60, app::XmlQualifiedName*, ReadNullableQualifiedName, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AED90, app::String*, ReadNullableString, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025AEDE0, app::Object*, ReadReferencedElement_1, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025AEE50,
        app::XmlSerializationReader_WriteCallbackInfo*,
        GetCallbackInfo,
        app::XmlSerializationReader* this_ptr,
        app::XmlQualifiedName* qname
    )
    IL2CPP_REGISTER_METHOD(0x025AF040, app::Object*, ReadReferencedElement_2, app::XmlSerializationReader* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x025AF3D0, bool, ReadList, app::XmlSerializationReader* this_ptr, app::Object** result_list)
    IL2CPP_REGISTER_METHOD(0x025AFAF0, void, ReadReferencedElements, app::XmlSerializationReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025B0860, app::Object*, ReadReferencingElement_1, app::XmlSerializationReader* this_ptr, app::String** fixup_reference)
    IL2CPP_REGISTER_METHOD(
        0x025B08F0,
        app::Object*,
        ReadReferencingElement_2,
        app::XmlSerializationReader* this_ptr,
        app::String* name,
        app::String* ns,
        app::String** fixup_reference
    )
    IL2CPP_REGISTER_METHOD(
        0x025B0910,
        app::Object*,
        ReadReferencingElement_3,
        app::XmlSerializationReader* this_ptr,
        app::String* name,
        app::String* ns,
        bool element_can_be_type,
        app::String** fixup_reference
    )
    IL2CPP_REGISTER_METHOD(0x025B0D30, app::IXmlSerializable*, ReadSerializable, app::XmlSerializationReader* this_ptr, app::IXmlSerializable* serializable)
    IL2CPP_REGISTER_METHOD(0x025B0F10, app::Object*, ReadTypedPrimitive_1, app::XmlSerializationReader* this_ptr, app::XmlQualifiedName* type)
    IL2CPP_REGISTER_METHOD(
        0x025B0F20,
        app::Object*,
        ReadTypedPrimitive_2,
        app::XmlSerializationReader* this_ptr,
        app::XmlQualifiedName* qname,
        bool report_unknown
    )
    IL2CPP_REGISTER_METHOD(0x025B1980, app::XmlNode*, ReadXmlNode, app::XmlSerializationReader* this_ptr, bool wrapped)
    IL2CPP_REGISTER_METHOD(0x025B19F0, app::XmlDocument*, ReadXmlDocument, app::XmlSerializationReader* this_ptr, bool wrapped)
    IL2CPP_REGISTER_METHOD(
        0x025B1C20,
        app::Array*,
        ShrinkArray,
        app::XmlSerializationReader* this_ptr,
        app::Array* a,
        int32_t length,
        app::Type* element_type,
        bool is_nullable
    )
    IL2CPP_REGISTER_METHOD(0x025B1CE0, app::XmlQualifiedName*, ToXmlQualifiedName, app::XmlSerializationReader* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x025B2020,
        void,
        UnknownAttribute,
        app::XmlSerializationReader* this_ptr,
        app::Object* o,
        app::XmlAttribute* attr,
        app::String* qnames
    )
    IL2CPP_REGISTER_METHOD(0x025B23E0, void, UnknownElement, app::XmlSerializationReader* this_ptr, app::Object* o, app::XmlElement* elem, app::String* qnames)
    IL2CPP_REGISTER_METHOD(0x025B27A0, void, UnknownNode_1, app::XmlSerializationReader* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x025B2810, void, UnknownNode_2, app::XmlSerializationReader* this_ptr, app::Object* o, app::String* qnames)
    IL2CPP_REGISTER_METHOD(0x025B2880, void, OnUnknownNode, app::XmlSerializationReader* this_ptr, app::XmlNode* node, app::Object* o, app::String* qnames)
    IL2CPP_REGISTER_METHOD(0x025B2DE0, void, UnreferencedObject, app::XmlSerializationReader* this_ptr, app::String* id, app::Object* o)
} // namespace app::classes::System::Xml::Serialization::XmlSerializationReader
