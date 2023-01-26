#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Grounding.h>
#include <Modloader/app/structs/Grounding_Pelvis.h>

namespace app::classes::RootMotion::FinalIK::Grounding_Pelvis {
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, get_IKOffset, (app::Grounding_Pelvis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_IKOffset, (app::Grounding_Pelvis * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_heightOffset, (app::Grounding_Pelvis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_heightOffset, (app::Grounding_Pelvis * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02074B70, void, Initiate, (app::Grounding_Pelvis * this_ptr, app::Grounding* grounding))
    IL2CPP_REGISTER_METHOD(0x02074C80, void, Reset, (app::Grounding_Pelvis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02074E80, void, OnEnable, (app::Grounding_Pelvis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02074F90, void, Process, (app::Grounding_Pelvis * this_ptr, float lowest_offset, float highest_offset, bool is_grounded))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Grounding_Pelvis * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Grounding_Pelvis
