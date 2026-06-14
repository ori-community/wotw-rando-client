#pragma once
#include <Modloader/app/structs/DebugSeinAbilityOverride.h>
#include <Modloader/app/structs/DebugSeinAbilityOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugSeinAbilityOverride {
        inline app::DebugSeinAbilityOverride__Class** type_info() {
            static app::DebugSeinAbilityOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugSeinAbilityOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugSeinAbilityOverride__Class* get_class() {
            return il2cpp::get_class<app::DebugSeinAbilityOverride__Class>(type_info(), "", "DebugSeinAbilityOverride");
        }
        inline app::DebugSeinAbilityOverride* create() {
            return il2cpp::create_object<app::DebugSeinAbilityOverride>(get_class());
        }
    } // namespace DebugSeinAbilityOverride
} // namespace app::classes::types
