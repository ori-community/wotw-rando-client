#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvironmentSoundPair.h>

namespace app::classes::EnvironmentSoundPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EnvironmentSoundPair* this_ptr)
}
