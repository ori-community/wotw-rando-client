#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::DoubleLinkAxis {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Axis *, get_Next, (app::DoubleLinkAxis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Next, (app::DoubleLinkAxis * this_ptr, app::Axis * value))
    IL2CPP_REGISTER_METHOD(0x02365520, void, ctor, (app::DoubleLinkAxis * this_ptr, app::Axis * axis, app::DoubleLinkAxis * inputaxis))
    IL2CPP_REGISTER_METHOD(0x023655A0, app::DoubleLinkAxis *, ConvertTree, (app::Axis * axis))
}
