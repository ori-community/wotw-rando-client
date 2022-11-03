#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WormHole {
    IL2CPP_REGISTER_METHOD(0x0058DF50, void, Start, (app::WormHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058DFD0, void, Serialize, (app::WormHole * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::WormHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E220, app::Quaternion, get_Rotation, (app::WormHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E300, void, OnEmerge, (app::WormHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WormHole * this_ptr))
} // namespace app::classes::WormHole
