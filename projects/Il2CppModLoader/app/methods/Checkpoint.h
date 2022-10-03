#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Checkpoint {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::Checkpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131F2E0, bool, CanCreateCheckpoint, (app::Checkpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::Checkpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnCheckpointCreated, (app::Checkpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::Checkpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131F3D0, void, ctor, (app::Checkpoint * this_ptr))
} // namespace app::classes::Checkpoint
