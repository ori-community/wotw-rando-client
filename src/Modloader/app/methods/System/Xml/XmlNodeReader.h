#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeReader.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>

namespace app::classes::System::Xml::XmlNodeReader {
    IL2CPP_REGISTER_METHOD(0x01DC7CF0, void, ctor, app::XmlNodeReader* this_ptr, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x01DC7EC0, bool, IsInReadingStates, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC7ED0, app::XmlNodeType__Enum, get_NodeType, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC7EE0, app::String*, get_Name, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC7F90, app::String*, get_LocalName, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8150, app::String*, get_NamespaceURI, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8210, app::String*, get_Prefix, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC82D0, app::String*, get_Value, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Depth, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8380, app::String*, get_BaseURI, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC83C0, bool, get_IsEmptyElement, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC83F0, bool, get_IsDefault, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8420, app::XmlSpace__Enum, get_XmlSpace, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8470, app::String*, get_XmlLang, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8530, app::IXmlSchemaInfo*, get_SchemaInfo, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8580, int32_t, get_AttributeCount, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC85C0, app::String*, GetAttribute_1, app::XmlNodeReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DC8750, app::String*, GetAttribute_2, app::XmlNodeReader* this_ptr, app::String* name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x01DC8830, app::String*, GetAttribute_3, app::XmlNodeReader* this_ptr, int32_t attribute_index)
    IL2CPP_REGISTER_METHOD(0x01DC8900, bool, MoveToAttribute_1, app::XmlNodeReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DC8AB0, void, MoveToAttribute_2, app::XmlNodeReader* this_ptr, int32_t attribute_index)
    IL2CPP_REGISTER_METHOD(0x01DC8CD0, bool, MoveToFirstAttribute, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8E10, bool, MoveToNextAttribute, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC8F70, bool, MoveToElement, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC9120, bool, Read_1, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC9130, bool, Read_2, app::XmlNodeReader* this_ptr, bool f_skip_children)
    IL2CPP_REGISTER_METHOD(0x01DC9340, bool, ReadNextNode, app::XmlNodeReader* this_ptr, bool f_skip_children)
    IL2CPP_REGISTER_METHOD(0x01DC9690, void, SetEndOfFile, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC96B0, bool, ReadAtZeroLevel, app::XmlNodeReader* this_ptr, bool f_skip_children)
    IL2CPP_REGISTER_METHOD(0x01DC9750, bool, ReadForward, app::XmlNodeReader* this_ptr, bool f_skip_children)
    IL2CPP_REGISTER_METHOD(0x01DC9980, void, ReSetReadingMarks, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC99B0, bool, get_EOF, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC99C0, void, Close, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ReadState__Enum_1, get_ReadState, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC99D0, void, Skip, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC99E0, app::String*, ReadString, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01703570, bool, get_HasAttributes, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417880, app::XmlNameTable*, get_NameTable, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC9AE0, app::String*, LookupNamespace, app::XmlNodeReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01DC9B20, void, ResolveEntity, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC9BF0, bool, ReadAttributeValue, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC9C40, void, FinishReadBinary, app::XmlNodeReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DC9C70,
        app::IDictionary_2_System_String_System_String_*,
        IXmlNamespaceResolver_GetNamespacesInScope,
        app::XmlNodeReader* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x01DC9C90, app::String*, IXmlNamespaceResolver_LookupPrefix, app::XmlNodeReader* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x01DC9CB0, app::String*, IXmlNamespaceResolver_LookupNamespace, app::XmlNodeReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01DC9D30, app::IDtdInfo*, get_DtdInfo, app::XmlNodeReader* this_ptr)
} // namespace app::classes::System::Xml::XmlNodeReader
