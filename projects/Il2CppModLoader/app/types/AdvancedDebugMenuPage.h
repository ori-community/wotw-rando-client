#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AdvancedDebugMenuPage__Class** type_info;
        inline app::AdvancedDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::AdvancedDebugMenuPage__Class>(type_info, "", "AdvancedDebugMenuPage");
        }
        inline app::AdvancedDebugMenuPage* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage>(get_class());
        }
    } // namespace AdvancedDebugMenuPage
} // namespace app::classes::types
