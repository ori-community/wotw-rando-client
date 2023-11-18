#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RagdollUtility.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::RootMotion::FinalIK::RagdollUtility {
    IL2CPP_REGISTER_METHOD(0x02A198F0, void, EnableRagdoll, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A19950, void, DisableRagdoll, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A19B00, void, Start, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1A430, app::IEnumerator*, DisableRagdollSmooth, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1A580, void, Update, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1A9A0, void, FixedUpdate, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1A9E0, void, LateUpdate, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1AB10, void, AfterLastIK, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1AB40, void, AfterAnimation, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1AB80, void, OnFinalPose, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1AC20, void, RagdollEnabler, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B0C0, bool, get_isRagdoll, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B1E0, void, RecordVelocities, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B250, bool, get_ikUsed, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B440, void, StoreLocalState, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B5B0, void, FixTransforms, (app::RagdollUtility * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02A1B630, void, OnDestroy, (app::RagdollUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1B830, void, ctor, (app::RagdollUtility * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::RagdollUtility
