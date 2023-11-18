#pragma once
#include <Modloader/app/structs/SkipCutscene_GameplayMode__Enum.h>
#include <Modloader/app/structs/SkipCutscene_GameplayMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipCutscene_GameplayMode__Enum {
        inline app::SkipCutscene_GameplayMode__Enum__Class** type_info() {
            static app::SkipCutscene_GameplayMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkipCutscene_GameplayMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkipCutscene_GameplayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkipCutscene_GameplayMode__Enum__Class>(type_info(), "", "SkipCutscene", "GameplayMode");
        }
        inline app::SkipCutscene_GameplayMode__Enum* create() {
            return il2cpp::create_object<app::SkipCutscene_GameplayMode__Enum>(get_class());
        }
    } // namespace SkipCutscene_GameplayMode__Enum
} // namespace app::classes::types
