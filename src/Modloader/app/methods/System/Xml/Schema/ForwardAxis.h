#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DoubleLinkAxis.h>
#include <Modloader/app/structs/ForwardAxis.h>

namespace app::classes::System::Xml::Schema::ForwardAxis {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::DoubleLinkAxis*, get_RootNode, app::ForwardAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DoubleLinkAxis*, get_TopNode, app::ForwardAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsAttribute, app::ForwardAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_IsDss, app::ForwardAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016CC090, bool, get_IsSelfAxis, app::ForwardAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016CC0A0, void, ctor, app::ForwardAxis* this_ptr, app::DoubleLinkAxis* axis, bool isdesorself)
} // namespace app::classes::System::Xml::Schema::ForwardAxis
