#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::ReplayValidator_Snapshot {
    IL2CPP_REGISTER_METHOD(0x00C4C6B0, void, SetFrame, (app::ReplayValidator_Snapshot * this_ptr, app::GhostFrame * frame, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReplayValidator_Snapshot * this_ptr))
}
