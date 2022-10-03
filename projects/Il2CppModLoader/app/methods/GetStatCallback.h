#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GetStatCallback {
    IL2CPP_REGISTER_METHOD(0x00E12810, void, OnResult, (app::GetStatCallback * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_ReplayModel_*, get_Replays, (app::GetStatCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E12C00, void, ctor, (app::GetStatCallback * this_ptr))
} // namespace app::classes::GetStatCallback
