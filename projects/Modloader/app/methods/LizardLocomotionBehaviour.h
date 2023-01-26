#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LizardLocomotionBehaviour.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::LizardLocomotionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FB0BA0, app::Transform*, get_VFXHolder, (app::LizardLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB0BD0, void, Prewarm, (app::LizardLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB1060, void, OnInitializeTask, (app::LizardLocomotionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1250, void, OnEnterTask, (app::LizardLocomotionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1400, app::BehaviourStatus__Enum, OnExecuteTask, (app::LizardLocomotionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1490, void, OnExitTask, (app::LizardLocomotionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB15E0, void, UpdateVFX, (app::LizardLocomotionBehaviour * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00FB16B0, void, StopRunningEfffect, (app::LizardLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::LizardLocomotionBehaviour * this_ptr))
} // namespace app::classes::LizardLocomotionBehaviour
