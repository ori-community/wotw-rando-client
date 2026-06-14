#pragma once
#include <Modloader/app/structs/KeyValuePair_2_MessageControll_NpcMessageSt_M_Timel_ShowFixedTimeTextEnt_TextVisu___Ar__Cl.h>
#include <Modloader/app/structs/KeyValuePair_2_MessageControlle_NpcMessageSty_Mo_Timeli_ShowFixedTimeTextEnt_TextVisu___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array {
        inline app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class** type_info() {
            static app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[MessageControllerB+NpcMessageStyle,Moon.Timeline.ShowFixedTimeTextEntity+TextVisuals][]");
        }
        inline app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array>(get_class());
        }
    } // namespace KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array
} // namespace app::classes::types
