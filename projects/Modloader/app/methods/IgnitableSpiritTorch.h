#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IgnitableSpiritTorch.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::IgnitableSpiritTorch {
    IL2CPP_REGISTER_METHOD(0x00625800, void, add_OnLightTorchWithGrenadeEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00625940, void, remove_OnLightTorchWithGrenadeEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00625A80, void, Awake, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00625BA0, void, UpdateLightSettings, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00625C80, void, OnDestroy, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00625D40, app::IgnitableSpiritTorch*, IgniteAnyTorchesNearPosition, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00625FB0, void, Light, (app::IgnitableSpiritTorch * this_ptr, bool by_grenade))
    IL2CPP_REGISTER_METHOD(0x006260E0, app::Vector3, get_Position, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00626170, void, Serialize, (app::IgnitableSpiritTorch * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x006261C0, void, FixedUpdate, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006263E0, void, ctor, (app::IgnitableSpiritTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00626400, void, cctor, ())
} // namespace app::classes::IgnitableSpiritTorch
