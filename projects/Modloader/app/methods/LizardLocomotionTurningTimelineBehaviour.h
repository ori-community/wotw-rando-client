#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/LizardLocomotionTurningTimelineBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::LizardLocomotionTurningTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FB17C0, app::Transform*, get_VFXHolder, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB17F0, void, Prewarm, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB1C80, void, OnInitializeTask, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1DB0, void, OnEnterTask, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1E40, app::BehaviourStatus__Enum, OnExecuteTask, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1ED0, void, OnExitTask, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB1F30, app::Vector3, RootMotionModifier, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00FB20E0, bool, IsToNearToLedge, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, float direction))
    IL2CPP_REGISTER_METHOD(0x00FB2130, void, UpdateVFX, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00FB2200, void, StopRunningEfffect, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB2310, void, ctor, (app::LizardLocomotionTurningTimelineBehaviour * this_ptr))
} // namespace app::classes::LizardLocomotionTurningTimelineBehaviour
