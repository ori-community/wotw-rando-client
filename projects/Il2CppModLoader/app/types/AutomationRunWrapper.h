#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutomationRunWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutomationRunWrapper__Class** type_info;
        inline app::AutomationRunWrapper__Class* get_class() {
            return il2cpp::get_class<app::AutomationRunWrapper__Class>(type_info, "", "AutomationRunWrapper");
        }
        inline app::AutomationRunWrapper* create() {
            return il2cpp::create_object<app::AutomationRunWrapper>(get_class());
        }
    } // namespace AutomationRunWrapper
} // namespace app::classes::types
