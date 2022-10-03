#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShrineCombat_States__Class** type_info;
        inline app::ShrineCombat_States__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_States__Class>(type_info, "", "ShrineCombat", "States");
        }
        inline app::ShrineCombat_States* create() {
            return il2cpp::create_object<app::ShrineCombat_States>(get_class());
        }
    } // namespace ShrineCombat_States
} // namespace app::classes::types
