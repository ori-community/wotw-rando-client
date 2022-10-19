#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShrineCombat_States {
        inline app::ShrineCombat_States__Class** type_info = (app::ShrineCombat_States__Class**)(modloader::win::memory::resolve_rva(0x0478B720));
        inline app::ShrineCombat_States__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_States__Class>(type_info, "", "ShrineCombat", "States");
        }
        inline app::ShrineCombat_States* create() {
            return il2cpp::create_object<app::ShrineCombat_States>(get_class());
        }
    } // namespace ShrineCombat_States
} // namespace app::classes::types
