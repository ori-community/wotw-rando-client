#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/MothLandBehaviour.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MothLandBehaviour {
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LandRadius, app::MothLandBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008663E0, void, set_LandRadius, app::MothLandBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008663F0, void, OnExecute, app::MothLandBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x00866600, void, OnUpdateBehaviour, app::MothLandBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008666E0, bool, SearchLandSpot, app::MothLandBehaviour* this_ptr, app::Vector2* land_point, app::Vector2* normal)
    IL2CPP_REGISTER_METHOD(0x008669F0, void, OnEndBehaviour, app::MothLandBehaviour* this_ptr, app::EntityBehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::MothLandBehaviour* this_ptr)
} // namespace app::classes::MothLandBehaviour
