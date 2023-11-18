#pragma once
#include <Modloader/app/structs/NavigationAgentLegacy.h>
#include <Modloader/app/structs/NavigationAgentLegacy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigationAgentLegacy {
        inline app::NavigationAgentLegacy__Class** type_info() {
            static app::NavigationAgentLegacy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigationAgentLegacy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigationAgentLegacy__Class* get_class() {
            return il2cpp::get_class<app::NavigationAgentLegacy__Class>(type_info(), "", "NavigationAgentLegacy");
        }
        inline app::NavigationAgentLegacy* create() {
            return il2cpp::create_object<app::NavigationAgentLegacy>(get_class());
        }
    } // namespace NavigationAgentLegacy
} // namespace app::classes::types
