#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XDeclaration.h>
#include <Modloader/app/structs/XDocument.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Linq::XDocument {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03035470, void, ctor_2, app::XDocument* this_ptr, app::XDocument* other)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XDeclaration*, get_Declaration, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Declaration, app::XDocument* this_ptr, app::XDeclaration* value)
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::XmlNodeType__Enum, get_NodeType, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03035690, app::XElement*, get_Root, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03035820, void, WriteTo, app::XDocument* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x030359B0, void, AddAttribute, app::XDocument* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x03035A20, void, AddAttributeSkipNotify, app::XDocument* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x03035A90, app::XNode*, CloneNode, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03035BE0, bool, IsWhitespace, app::String* s)
    IL2CPP_REGISTER_METHOD(0x03035C60, void, ValidateNode, app::XDocument* this_ptr, app::XNode* node, app::XNode* previous)
    IL2CPP_REGISTER_METHOD(
        0x03035ED0,
        void,
        ValidateDocument,
        app::XDocument* this_ptr,
        app::XNode* previous,
        app::XmlNodeType__Enum allow_before,
        app::XmlNodeType__Enum allow_after
    )
    IL2CPP_REGISTER_METHOD(0x03036050, void, ValidateString, app::XDocument* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0157AB70, app::Object*, GetFirstNode_1, app::XDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157AB70, app::XElement*, GetFirstNode_2, app::XDocument* this_ptr)
} // namespace app::classes::System::Xml::Linq::XDocument
