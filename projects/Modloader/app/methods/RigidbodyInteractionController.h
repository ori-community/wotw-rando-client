#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RigidbodyInteractionController.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Array.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RigidbodyInteractionController {
    IL2CPP_REGISTER_METHOD(0x00912560, void, OnCollisionEnter, (app::RigidbodyInteractionController * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00912600, void, OnCollisionStay, (app::RigidbodyInteractionController * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00912670, void, OnCollisionExit, (app::RigidbodyInteractionController * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x009126E0, void, OnApplyForce, (app::RigidbodyInteractionController * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x00912880, void, HandleCollision, (app::RigidbodyInteractionController * this_ptr, app::RigidbodyInteractionController_InteractionInformation interaction_information, app::RigidbodyInteractionController_InstanciationInteractionSettings__Array* collision_instanciation_settings, app::RigidbodyInteractionController_SoundInteractionSettings__Array* collision_sound_settings))
    IL2CPP_REGISTER_METHOD(0x00913670, float, GetRemappedModulationValue, (app::RigidbodyInteractionController * this_ptr, app::Rect range_remapping, float input_parameter))
    IL2CPP_REGISTER_METHOD(0x00913740, void, ctor, (app::RigidbodyInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00913760, void, cctor, ())
} // namespace app::classes::RigidbodyInteractionController
