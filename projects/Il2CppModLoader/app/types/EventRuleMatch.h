#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventRuleMatch {
        namespace {
            inline app::EventRuleMatch__Class* type_info_ref = nullptr;
        }
        inline app::EventRuleMatch__Class** type_info = &type_info_ref;
        inline app::EventRuleMatch__Class* get_class() {
            return il2cpp::get_class<app::EventRuleMatch__Class>(type_info, "PlayFab.PlayStreamModels", "EventRuleMatch");
        }
        inline app::EventRuleMatch* create() {
            return il2cpp::create_object<app::EventRuleMatch>(get_class());
        }
    } // namespace EventRuleMatch
} // namespace app::classes::types
