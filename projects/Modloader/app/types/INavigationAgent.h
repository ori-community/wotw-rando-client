#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace INavigationAgent {
        namespace {
            inline app::INavigationAgent__Class* type_info_ref = nullptr;
        }
        inline app::INavigationAgent__Class** type_info = &type_info_ref;
        inline app::INavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::INavigationAgent__Class>(type_info, "", "INavigationAgent");
        }
    } // namespace INavigationAgent
} // namespace app::classes::types
