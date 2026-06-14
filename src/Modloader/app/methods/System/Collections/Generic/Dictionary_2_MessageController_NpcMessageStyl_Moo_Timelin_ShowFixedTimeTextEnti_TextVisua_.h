#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MessageController_NpcMessageStyl_Moo_Timelin_ShowFixedTimeTextEnti_TextVisua_.h>
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
    IL2CPP_REGISTER_METHOD(
        0x0283AC20,
        void,
        ctor,
        app::Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* this_ptr,
        app::MessageControllerB_NpcMessageStyle__Enum key,
        app::ShowFixedTimeTextEntity_TextVisuals** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* this_ptr,
        app::MessageControllerB_NpcMessageStyle__Enum key,
        app::ShowFixedTimeTextEntity_TextVisuals* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_
