#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NpcProject.h>

namespace app::classes::NpcProject {
    IL2CPP_REGISTER_METHOD(0x0060CEB0, void, Start, (app::NpcProject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CF60, void, OnDestroy, (app::NpcProject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NpcProject * this_ptr))
} // namespace app::classes::NpcProject
