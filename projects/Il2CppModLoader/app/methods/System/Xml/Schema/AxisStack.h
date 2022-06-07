#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::AxisStack {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ForwardAxis *, get_Subtree, (app::AxisStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Length, (app::AxisStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A3240, void, ctor, (app::AxisStack * this_ptr, app::ForwardAxis * faxis, app::ActiveAxis * parent))
    IL2CPP_REGISTER_METHOD(0x019A33C0, void, Push, (app::AxisStack * this_ptr, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x019A3550, void, Pop, (app::AxisStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A35A0, bool, Equal, (app::String * thisname, app::String * this_u_r_n, app::String * name, app::String * u_r_n))
    IL2CPP_REGISTER_METHOD(0x019A3650, void, MoveToParent, (app::AxisStack * this_ptr, app::String * name, app::String * u_r_n, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x019A3A10, bool, MoveToChild, (app::AxisStack * this_ptr, app::String * name, app::String * u_r_n, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x019A3C70, bool, MoveToAttribute, (app::AxisStack * this_ptr, app::String * name, app::String * u_r_n, int32_t depth))
}
