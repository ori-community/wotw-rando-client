#pragma once
#include <Modloader/app/structs/RuleType__Enum.h>
#include <Modloader/app/structs/RuleType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuleType__Enum {
        inline app::RuleType__Enum__Class** type_info() {
            static app::RuleType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuleType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuleType__Enum__Class>(type_info(), "PlayFab.MultiplayerModels", "RuleType");
        }
        inline app::RuleType__Enum* create() {
            return il2cpp::create_object<app::RuleType__Enum>(get_class());
        }
    } // namespace RuleType__Enum
} // namespace app::classes::types
