#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavigationAgentLegacy {
        namespace {
            inline app::NavigationAgentLegacy__Class* type_info_ref = nullptr;
        }
        inline app::NavigationAgentLegacy__Class** type_info = &type_info_ref;
        inline app::NavigationAgentLegacy__Class* get_class() {
            return il2cpp::get_class<app::NavigationAgentLegacy__Class>(type_info, "", "NavigationAgentLegacy");
        }
        inline app::NavigationAgentLegacy* create() {
            return il2cpp::create_object<app::NavigationAgentLegacy>(get_class());
        }
    } // namespace NavigationAgentLegacy
} // namespace app::classes::types
