#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmbienceZone_WiseAuxSend.h>
#include <Modloader/app/structs/ComparisonComparer_1_AmbienceZone_WiseAuxSend_.h>
#include <Modloader/app/structs/Comparison_1_AmbienceZone_WiseAuxSend_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AmbienceZone_WiseAuxSend_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_AmbienceZone_WiseAuxSend_* this_ptr,
        app::Comparison_1_AmbienceZone_WiseAuxSend_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_AmbienceZone_WiseAuxSend_* this_ptr,
        app::AmbienceZone_WiseAuxSend x,
        app::AmbienceZone_WiseAuxSend y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AmbienceZone_WiseAuxSend_
