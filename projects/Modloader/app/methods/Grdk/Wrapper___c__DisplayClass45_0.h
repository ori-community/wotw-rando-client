#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Wrapper_c_DisplayClass45_0.h>
#include <Modloader/app/structs/XblAchievementsResultHandle.h>

namespace app::classes::Grdk::Wrapper___c__DisplayClass45_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Wrapper_c_DisplayClass45_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0108A710,
        void,
        _GetUnlockedAchievements_b__0,
        app::Wrapper_c_DisplayClass45_0* this_ptr,
        int32_t hresult,
        app::XblAchievementsResultHandle* result
    )
} // namespace app::classes::Grdk::Wrapper___c__DisplayClass45_0
