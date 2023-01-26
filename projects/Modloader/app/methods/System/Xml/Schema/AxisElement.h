#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DoubleLinkAxis.h>
#include <Modloader/app/structs/AxisElement.h>
#include <Modloader/app/structs/ForwardAxis.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::AxisElement {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DoubleLinkAxis*, get_CurNode, (app::AxisElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A2F80, void, ctor, (app::AxisElement * this_ptr, app::DoubleLinkAxis* node, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x019A2FA0, void, SetDepth, (app::AxisElement * this_ptr, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x019A2FB0, void, MoveToParent, (app::AxisElement * this_ptr, int32_t depth, app::ForwardAxis* parent))
    IL2CPP_REGISTER_METHOD(0x019A30D0, bool, MoveToChild, (app::AxisElement * this_ptr, app::String* name, app::String* u_r_n, int32_t depth, app::ForwardAxis* parent))
} // namespace app::classes::System::Xml::Schema::AxisElement
