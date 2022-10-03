#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugSeinAbilityOverride {
        namespace {
            app::DebugSeinAbilityOverride__Class* type_info_ref = nullptr;
        }
        app::DebugSeinAbilityOverride__Class** type_info = &type_info_ref;
        inline app::DebugSeinAbilityOverride__Class* get_class() {
            return il2cpp::get_class<app::DebugSeinAbilityOverride__Class>(type_info, "", "DebugSeinAbilityOverride");
        }
        inline app::DebugSeinAbilityOverride* create() {
            return il2cpp::create_object<app::DebugSeinAbilityOverride>(get_class());
        }
    } // namespace DebugSeinAbilityOverride
} // namespace app::classes::types
