#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuleType__Enum {
        namespace {
            inline app::RuleType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RuleType__Enum__Class** type_info = &type_info_ref;
        inline app::RuleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuleType__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "RuleType");
        }
        inline app::RuleType__Enum* create() {
            return il2cpp::create_object<app::RuleType__Enum>(get_class());
        }
    } // namespace RuleType__Enum
} // namespace app::classes::types
