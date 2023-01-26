#pragma once
#include <Modloader/app/structs/SimpleNavigationAgent.h>
#include <Modloader/app/structs/SimpleNavigationAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleNavigationAgent {
        inline app::SimpleNavigationAgent__Class** type_info() {
            static app::SimpleNavigationAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleNavigationAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleNavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::SimpleNavigationAgent__Class>(type_info(), "MoonNavigation", "SimpleNavigationAgent");
        }
        inline app::SimpleNavigationAgent* create() {
            return il2cpp::create_object<app::SimpleNavigationAgent>(get_class());
        }
    } // namespace SimpleNavigationAgent
} // namespace app::classes::types
