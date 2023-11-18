#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightTorch.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LightTorch {
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsChasing, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114FF40, bool, get_IsCarried, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114FF70, void, Awake, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011501A0, void, OnDestroy, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01150350, void, Serialize, (app::LightTorch * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011503A0, bool, get_SeinInsideTorchZone, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01150610, void, OnGameReset, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01150740, void, SetToNormal, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011508F0, void, ChangeToNormalImmediate, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01150A90, void, ChangeToNormal, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01150DF0, void, ChangeToChase, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01151300, void, FixedUpdate, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01151A50, void, UpdateChasing, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsSuspended, (app::LightTorch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00881B70, app::SuspendableMask__Enum, get_Mask, (app::LightTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011524E0, void, set_Mask, (app::LightTorch * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x011525A0, void, ctor, (app::LightTorch * this_ptr))
} // namespace app::classes::LightTorch
