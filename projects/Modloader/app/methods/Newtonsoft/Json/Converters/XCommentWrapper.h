#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XComment.h>
#include <Modloader/app/structs/XCommentWrapper.h>

namespace app::classes::Newtonsoft::Json::Converters::XCommentWrapper {
    IL2CPP_REGISTER_METHOD(0x01A560E0, app::XComment*, get_Text, app::XCommentWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XCommentWrapper* this_ptr, app::XComment* text)
    IL2CPP_REGISTER_METHOD(0x01A561B0, app::String*, get_Value, app::XCommentWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A561D0, app::IXmlNode*, get_ParentNode, app::XCommentWrapper* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::XCommentWrapper
