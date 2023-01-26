#pragma once
#include <Modloader/app/structs/EventRuleMatch.h>
#include <Modloader/app/structs/EventRuleMatch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventRuleMatch {
        inline app::EventRuleMatch__Class** type_info() {
            static app::EventRuleMatch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventRuleMatch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventRuleMatch__Class* get_class() {
            return il2cpp::get_class<app::EventRuleMatch__Class>(type_info(), "PlayFab.PlayStreamModels", "EventRuleMatch");
        }
        inline app::EventRuleMatch* create() {
            return il2cpp::create_object<app::EventRuleMatch>(get_class());
        }
    } // namespace EventRuleMatch
} // namespace app::classes::types
