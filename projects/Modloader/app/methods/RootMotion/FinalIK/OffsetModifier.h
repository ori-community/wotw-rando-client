#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/OffsetModifier.h>
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Array.h>

namespace app::classes::RootMotion::FinalIK::OffsetModifier {
    IL2CPP_REGISTER_METHOD(0x02A18130, float, get_deltaTime, app::OffsetModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A18190, void, Start, app::OffsetModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A182E0, app::IEnumerator*, Initiate, app::OffsetModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A18430, void, ModifyOffset, app::OffsetModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A18600, void, ApplyLimits, app::OffsetModifier* this_ptr, app::OffsetModifier_OffsetLimits__Array* limits)
    IL2CPP_REGISTER_METHOD(0x02A187A0, void, OnDestroy, app::OffsetModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::OffsetModifier* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::OffsetModifier
