#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuleType__Enum {
        namespace {
            app::RuleType__Enum__Class* type_info_ref = nullptr;
        }
        app::RuleType__Enum__Class** type_info = &type_info_ref;
        inline app::RuleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuleType__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "RuleType");
        }
        inline app::RuleType__Enum* create() {
            return il2cpp::create_object<app::RuleType__Enum>(get_class());
        }
    } // namespace RuleType__Enum
} // namespace app::classes::types
