#pragma once
#include <Modloader/app/structs/HornBugSpawnSetup_Anim__Enum.h>
#include <Modloader/app/structs/HornBugSpawnSetup_Anim__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnSetup_Anim__Enum {
        inline app::HornBugSpawnSetup_Anim__Enum__Class** type_info() {
            static app::HornBugSpawnSetup_Anim__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugSpawnSetup_Anim__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugSpawnSetup_Anim__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugSpawnSetup_Anim__Enum__Class>(type_info(), "", "HornBugSpawnSetup", "Anim");
        }
        inline app::HornBugSpawnSetup_Anim__Enum* create() {
            return il2cpp::create_object<app::HornBugSpawnSetup_Anim__Enum>(get_class());
        }
    } // namespace HornBugSpawnSetup_Anim__Enum
} // namespace app::classes::types
