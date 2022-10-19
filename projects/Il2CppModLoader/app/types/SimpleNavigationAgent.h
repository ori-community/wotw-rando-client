#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleNavigationAgent {
        namespace {
            inline app::SimpleNavigationAgent__Class* type_info_ref = nullptr;
        }
        inline app::SimpleNavigationAgent__Class** type_info = &type_info_ref;
        inline app::SimpleNavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::SimpleNavigationAgent__Class>(type_info, "MoonNavigation", "SimpleNavigationAgent");
        }
        inline app::SimpleNavigationAgent* create() {
            return il2cpp::create_object<app::SimpleNavigationAgent>(get_class());
        }
    } // namespace SimpleNavigationAgent
} // namespace app::classes::types
