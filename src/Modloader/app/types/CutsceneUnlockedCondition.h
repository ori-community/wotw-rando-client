#pragma once
#include <Modloader/app/structs/CutsceneUnlockedCondition.h>
#include <Modloader/app/structs/CutsceneUnlockedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneUnlockedCondition {
        inline app::CutsceneUnlockedCondition__Class** type_info() {
            static app::CutsceneUnlockedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneUnlockedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneUnlockedCondition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneUnlockedCondition__Class>(type_info(), "", "CutsceneUnlockedCondition");
        }
        inline app::CutsceneUnlockedCondition* create() {
            return il2cpp::create_object<app::CutsceneUnlockedCondition>(get_class());
        }
    } // namespace CutsceneUnlockedCondition
} // namespace app::classes::types
