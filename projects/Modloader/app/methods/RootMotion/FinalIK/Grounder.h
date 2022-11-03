#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::Grounder {
    IL2CPP_REGISTER_METHOD(0x020654E0, app::Vector3, GetSpineOffsetTarget, (app::Grounder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (app::Grounder * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x020656C0, app::Vector3, GetLegSpineBendVector, (app::Grounder * this_ptr, app::Grounding_Leg* leg))
    IL2CPP_REGISTER_METHOD(0x020659C0, app::Vector3, GetLegSpineTangent, (app::Grounder * this_ptr, app::Grounding_Leg* leg))
    IL2CPP_REGISTER_METHOD(0x02065D00, void, ctor, (app::Grounder * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Grounder
