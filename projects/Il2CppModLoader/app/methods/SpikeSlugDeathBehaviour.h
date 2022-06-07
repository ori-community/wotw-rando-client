#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpikeSlugDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x011C70A0, void, OnEnterTask, (app::SpikeSlugDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011C7410, void, OnEnterFalling, (app::SpikeSlugDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C7510, void, OnEnterLand, (app::SpikeSlugDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C7970, void, OnExitTask, (app::SpikeSlugDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011C7B30, void, ctor, (app::SpikeSlugDeathBehaviour * this_ptr))
}
