#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementTitleAssociation.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation_1.h>

namespace app::classes::XGamingRuntime::XblAchievementTitleAssociation {
    IL2CPP_REGISTER_METHOD(
        0x030BE1A0,
        void,
        ctor,
        app::XblAchievementTitleAssociation* this_ptr,
        app::XblAchievementTitleAssociation_1 interop_title_association
    )
}
