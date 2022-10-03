#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FrogGroup {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_FrogEntity_*, get_AliveFrogsInGroup, (app::FrogGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01648F90, void, RegisterAliveFrog, (app::FrogGroup * this_ptr, app::FrogEntity* frog))
    IL2CPP_REGISTER_METHOD(0x01649030, void, UnregisterFrogFromAlive, (app::FrogGroup * this_ptr, app::FrogEntity* frog))
    IL2CPP_REGISTER_METHOD(0x016490D0, void, ctor, (app::FrogGroup * this_ptr))
} // namespace app::classes::FrogGroup
