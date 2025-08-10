#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClearTrailOverCertainDistance.h>

namespace app::classes::ClearTrailOverCertainDistance {
    IL2CPP_REGISTER_METHOD(0x012AD3E0, void, Awake, app::ClearTrailOverCertainDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AD4D0, void, Update, app::ClearTrailOverCertainDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AD7A0, void, OnPoolSpawned, app::ClearTrailOverCertainDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::ClearTrailOverCertainDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ClearTrailOverCertainDistance* this_ptr)
} // namespace app::classes::ClearTrailOverCertainDistance
