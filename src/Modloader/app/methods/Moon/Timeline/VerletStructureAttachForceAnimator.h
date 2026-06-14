#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/VerletStructureAttachForceAnimator.h>

namespace app::classes::Moon::Timeline::VerletStructureAttachForceAnimator {
    IL2CPP_REGISTER_METHOD(0x00D1C240, void, OnStartPlayback, app::VerletStructureAttachForceAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D1C260, void, InitVerletData, app::VerletStructureAttachForceAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1C960, void, OnUpdateEntity, app::VerletStructureAttachForceAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00D1C980, void, OnStopPlayback, app::VerletStructureAttachForceAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1C990, void, ResetValue, app::VerletStructureAttachForceAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1CB40, void, SampleValue, app::VerletStructureAttachForceAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D1CCF0, void, OnDrawGizmosSelected, app::VerletStructureAttachForceAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1D200, void, ctor, app::VerletStructureAttachForceAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::VerletStructureAttachForceAnimator
