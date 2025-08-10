#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDeclaration.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlDeclaration {
    IL2CPP_REGISTER_METHOD(
        0x0196B610,
        void,
        ctor,
        app::XmlDeclaration* this_ptr,
        app::String* version,
        app::String* encoding,
        app::String* standalone,
        app::XmlDocument* doc
    )
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Version, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Version, app::XmlDeclaration* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Encoding, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196B800, void, set_Encoding, app::XmlDeclaration* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Standalone, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196B8B0, void, set_Standalone, app::XmlDeclaration* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0195B1F0, app::String*, get_Value, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B210, void, set_Value, app::XmlDeclaration* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0196BA30, app::String*, get_InnerText, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196BC70, void, set_InnerText, app::XmlDeclaration* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0196BE20, app::String*, get_Name, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A1590, app::String*, get_LocalName, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007EC3F0, app::XmlNodeType__Enum, get_NodeType, app::XmlDeclaration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196BEA0, app::XmlNode*, CloneNode, app::XmlDeclaration* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x0196BEF0, void, WriteTo, app::XmlDeclaration* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, app::XmlDeclaration* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x0196BF60, bool, IsValidXmlVersion, app::XmlDeclaration* this_ptr, app::String* ver)
} // namespace app::classes::System::Xml::XmlDeclaration
