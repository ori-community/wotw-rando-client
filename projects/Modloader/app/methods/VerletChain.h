#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletChain.h>

namespace app::classes::VerletChain {
    IL2CPP_REGISTER_METHOD(0x013C3340, void, Awake, (app::VerletChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C3930, void, LateUpdate, (app::VerletChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C3E10, void, ctor, (app::VerletChain * this_ptr))
} // namespace app::classes::VerletChain
