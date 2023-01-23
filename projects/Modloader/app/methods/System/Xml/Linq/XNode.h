#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SaveOptions__Enum.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Xml::Linq::XNode {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303A3A0, void, Remove, (app::XNode * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F780, XNode_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303A470, app::String*, ToString_1, (app::XNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303A590, app::String*, ToString_2, (app::XNode * this_ptr, app::SaveOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AppendText, (app::XNode * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x0303A5A0, app::String*, GetXmlString, (app::XNode * this_ptr, app::SaveOptions__Enum o))
} // namespace app::classes::System::Xml::Linq::XNode
