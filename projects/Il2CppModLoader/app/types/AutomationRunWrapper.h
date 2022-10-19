#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutomationRunWrapper {
        inline app::AutomationRunWrapper__Class** type_info = (app::AutomationRunWrapper__Class**)(modloader::win::memory::resolve_rva(0x04772AB0));
        inline app::AutomationRunWrapper__Class* get_class() {
            return il2cpp::get_class<app::AutomationRunWrapper__Class>(type_info, "", "AutomationRunWrapper");
        }
        inline app::AutomationRunWrapper* create() {
            return il2cpp::create_object<app::AutomationRunWrapper>(get_class());
        }
    } // namespace AutomationRunWrapper
} // namespace app::classes::types
