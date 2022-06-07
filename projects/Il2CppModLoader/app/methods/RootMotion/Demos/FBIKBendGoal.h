#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::FBIKBendGoal {
    IL2CPP_REGISTER_METHOD(0x02219B40, void, Start, (app::FBIKBendGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02219BE0, void, Update, (app::FBIKBendGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FBIKBendGoal * this_ptr))
}
