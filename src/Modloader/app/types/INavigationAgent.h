#pragma once
#include <Modloader/app/structs/INavigationAgent.h>
#include <Modloader/app/structs/INavigationAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INavigationAgent {
        inline app::INavigationAgent__Class** type_info() {
            static app::INavigationAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::INavigationAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::INavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::INavigationAgent__Class>(type_info(), "", "INavigationAgent");
        }
    } // namespace INavigationAgent
} // namespace app::classes::types
