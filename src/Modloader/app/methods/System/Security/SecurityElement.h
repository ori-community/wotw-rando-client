#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/SecurityElement_SecurityAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Security::SecurityElement {
    IL2CPP_REGISTER_METHOD(0x01E1ED30, void, ctor_1, app::SecurityElement* this_ptr, app::String* tag)
    IL2CPP_REGISTER_METHOD(0x01E1ED40, void, ctor_2, app::SecurityElement* this_ptr, app::String* tag, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01E1EF40, app::Hashtable*, get_Attributes, app::SecurityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::ArrayList*, get_Children, app::SecurityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Tag, app::SecurityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Text, app::SecurityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1F2C0, void, set_Text, app::SecurityElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E1F4A0, void, AddAttribute, app::SecurityElement* this_ptr, app::String* name, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E1F7D0, void, AddChild, app::SecurityElement* this_ptr, app::SecurityElement* child)
    IL2CPP_REGISTER_METHOD(0x01E1F990, app::String*, Attribute, app::SecurityElement* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01E1FA70, app::String*, Escape, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01E1FD70, app::String*, Unescape, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01E1FFD0, app::SecurityElement*, FromString, app::String* xml)
    IL2CPP_REGISTER_METHOD(0x01E20200, bool, IsValidAttributeName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01E202E0, bool, IsValidAttributeValue, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E203C0, bool, IsValidTag, app::String* tag)
    IL2CPP_REGISTER_METHOD(0x01E204A0, bool, IsValidText, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01E20580, app::SecurityElement*, SearchForChildByTag, app::SecurityElement* this_ptr, app::String* tag)
    IL2CPP_REGISTER_METHOD(0x01E20720, app::String*, SearchForTextOfTag, app::SecurityElement* this_ptr, app::String* tag)
    IL2CPP_REGISTER_METHOD(0x01E208D0, app::String*, ToString, app::SecurityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E20A70, void, ToXml, app::SecurityElement* this_ptr, app::StringBuilder** s, int32_t level)
    IL2CPP_REGISTER_METHOD(0x01E21010, app::SecurityElement_SecurityAttribute*, GetAttribute, app::SecurityElement* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_m_strText, app::SecurityElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E21210, app::String*, SearchForTextOfLocalName, app::SecurityElement* this_ptr, app::String* str_local_name)
    IL2CPP_REGISTER_METHOD(0x01E214E0, void, cctor, )
} // namespace app::classes::System::Security::SecurityElement
