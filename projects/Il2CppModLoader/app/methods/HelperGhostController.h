#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HelperGhostController {
    IL2CPP_REGISTER_METHOD(0x010A32F0, void, Start, (app::HelperGhostController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A3370, void, OnTriggerStay, (app::HelperGhostController * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x010A3670, void, StartHelperGhostSetup, (app::HelperGhostController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A3A10, void, FixedUpdate, (app::HelperGhostController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A3C10, app::IEnumerator *, OnFinishedRoutive, (app::HelperGhostController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HelperGhostController * this_ptr))
}
