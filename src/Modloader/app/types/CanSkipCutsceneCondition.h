#pragma once
#include <Modloader/app/structs/CanSkipCutsceneCondition.h>
#include <Modloader/app/structs/CanSkipCutsceneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanSkipCutsceneCondition {
        inline app::CanSkipCutsceneCondition__Class** type_info() {
            static app::CanSkipCutsceneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanSkipCutsceneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanSkipCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCutsceneCondition__Class>(type_info(), "", "CanSkipCutsceneCondition");
        }
        inline app::CanSkipCutsceneCondition* create() {
            return il2cpp::create_object<app::CanSkipCutsceneCondition>(get_class());
        }
    } // namespace CanSkipCutsceneCondition
} // namespace app::classes::types
