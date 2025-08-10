#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IXmlSerializable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSerializationWriteCallback.h>
#include <Modloader/app/structs/XmlSerializationWriter.h>
#include <Modloader/app/structs/XmlSerializerNamespaces.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationWriter {
    IL2CPP_REGISTER_METHOD(0x025B9F60, void, ctor, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025BA0C0, void, Initialize, app::XmlSerializationWriter* this_ptr, app::XmlWriter* writer, app::XmlSerializerNamespaces* nss)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlWriter*, get_Writer, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025BA340,
        void,
        AddWriteCallback,
        app::XmlSerializationWriter* this_ptr,
        app::Type* type,
        app::String* type_name,
        app::String* type_ns,
        app::XmlSerializationWriteCallback* callback
    )
    IL2CPP_REGISTER_METHOD(
        0x025BA5D0,
        app::Exception*,
        CreateUnknownAnyElementException,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x025BA790, app::Exception*, CreateUnknownTypeException_1, app::XmlSerializationWriter* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x025BA7D0, app::Exception*, CreateUnknownTypeException_2, app::XmlSerializationWriter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x025BA980, app::String*, FromXmlQualifiedName, app::XmlSerializationWriter* this_ptr, app::XmlQualifiedName* xml_qualified_name)
    IL2CPP_REGISTER_METHOD(0x025BAA90, app::String*, GetId, app::XmlSerializationWriter* this_ptr, app::Object* o, bool add_to_references_list)
    IL2CPP_REGISTER_METHOD(0x025BACC0, bool, AlreadyQueued, app::XmlSerializationWriter* this_ptr, app::Object* ob)
    IL2CPP_REGISTER_METHOD(0x025BAD00, app::String*, GetNamespacePrefix, app::XmlSerializationWriter* this_ptr, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x025BAE90, app::String*, GetQualifiedName, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x025BB130, void, TopLevelElement, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025BB140,
        void,
        WriteAttribute_1,
        app::XmlSerializationWriter* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB1C0,
        void,
        WriteAttribute_2,
        app::XmlSerializationWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x025BB240, void, WriteXmlNode, app::XmlSerializationWriter* this_ptr, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(
        0x025BB3B0,
        void,
        WriteElementEncoded,
        app::XmlSerializationWriter* this_ptr,
        app::XmlNode* node,
        app::String* name,
        app::String* ns,
        bool is_nullable,
        bool any
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB520,
        void,
        WriteElementLiteral,
        app::XmlSerializationWriter* this_ptr,
        app::XmlNode* node,
        app::String* name,
        app::String* ns,
        bool is_nullable,
        bool any
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB690,
        void,
        WriteElementQualifiedName_1,
        app::XmlSerializationWriter* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::XmlQualifiedName* value
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB6B0,
        void,
        WriteElementQualifiedName_2,
        app::XmlSerializationWriter* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::XmlQualifiedName* value,
        app::XmlQualifiedName* xsi_type
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB850,
        void,
        WriteElementString_1,
        app::XmlSerializationWriter* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(
        0x025BB870,
        void,
        WriteElementString_2,
        app::XmlSerializationWriter* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::String* value,
        app::XmlQualifiedName* xsi_type
    )
    IL2CPP_REGISTER_METHOD(0x01706DA0, void, WriteEndElement_1, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025BBA60, void, WriteEndElement_2, app::XmlSerializationWriter* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x025BBAC0, void, WriteNamespaceDeclarations, app::XmlSerializationWriter* this_ptr, app::XmlSerializerNamespaces* xmlns)
    IL2CPP_REGISTER_METHOD(
        0x025BBE50,
        void,
        WriteNullableQualifiedNameEncoded,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::XmlQualifiedName* value,
        app::XmlQualifiedName* xsi_type
    )
    IL2CPP_REGISTER_METHOD(
        0x025BBF50,
        void,
        WriteNullableQualifiedNameLiteral,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::XmlQualifiedName* value
    )
    IL2CPP_REGISTER_METHOD(
        0x025BC050,
        void,
        WriteNullableStringEncoded,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::String* value,
        app::XmlQualifiedName* xsi_type
    )
    IL2CPP_REGISTER_METHOD(
        0x025BC070,
        void,
        WriteNullableStringLiteral,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x025BC0A0, void, WriteNullTagEncoded, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x025BC1F0, void, WriteNullTagLiteral, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x025BC340,
        void,
        WritePotentiallyReferencingElement,
        app::XmlSerializationWriter* this_ptr,
        app::String* n,
        app::String* ns,
        app::Object* o,
        app::Type* ambient_type,
        bool suppress_reference,
        bool is_nullable
    )
    IL2CPP_REGISTER_METHOD(0x025BC860, void, WriteReferencedElements, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025BCAE0, bool, IsPrimitiveArray, app::XmlSerializationWriter* this_ptr, app::TypeData* td)
    IL2CPP_REGISTER_METHOD(0x025BCC10, void, WriteArray, app::XmlSerializationWriter* this_ptr, app::Object* o, app::TypeData* td)
    IL2CPP_REGISTER_METHOD(
        0x025BCF70,
        void,
        WriteReferencingElement,
        app::XmlSerializationWriter* this_ptr,
        app::String* n,
        app::String* ns,
        app::Object* o,
        bool is_nullable
    )
    IL2CPP_REGISTER_METHOD(0x025BD170, void, CheckReferenceQueue, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025BD2F0,
        void,
        WriteSerializable_1,
        app::XmlSerializationWriter* this_ptr,
        app::IXmlSerializable* serializable,
        app::String* name,
        app::String* ns,
        bool is_nullable
    )
    IL2CPP_REGISTER_METHOD(
        0x025BD320,
        void,
        WriteSerializable_2,
        app::XmlSerializationWriter* this_ptr,
        app::IXmlSerializable* serializable,
        app::String* name,
        app::String* ns,
        bool is_nullable,
        bool wrapped
    )
    IL2CPP_REGISTER_METHOD(0x025BD450, void, WriteStartDocument, app::XmlSerializationWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025BD4B0, void, WriteStartElement_1, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x025BD4E0,
        void,
        WriteStartElement_2,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        bool write_prefixed
    )
    IL2CPP_REGISTER_METHOD(0x025BD510, void, WriteStartElement_3, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns, app::Object* o)
    IL2CPP_REGISTER_METHOD(
        0x025BD540,
        void,
        WriteStartElement_4,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::Object* o,
        bool write_prefixed
    )
    IL2CPP_REGISTER_METHOD(
        0x025BD570,
        void,
        WriteStartElement_5,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::Object* o,
        bool write_prefixed,
        app::ICollection* namespaces
    )
    IL2CPP_REGISTER_METHOD(
        0x025BDBA0,
        void,
        WriteTypedPrimitive,
        app::XmlSerializationWriter* this_ptr,
        app::String* name,
        app::String* ns,
        app::Object* o,
        bool xsi_type
    )
    IL2CPP_REGISTER_METHOD(0x025BDF20, void, WriteValue, app::XmlSerializationWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025BDF60, void, WriteXmlAttribute, app::XmlSerializationWriter* this_ptr, app::XmlNode* node, app::Object* container)
    IL2CPP_REGISTER_METHOD(0x025BE260, void, WriteXsiType, app::XmlSerializationWriter* this_ptr, app::String* name, app::String* ns)
} // namespace app::classes::System::Xml::Serialization::XmlSerializationWriter
