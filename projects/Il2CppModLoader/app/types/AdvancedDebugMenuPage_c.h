#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AdvancedDebugMenuPage_c__Class** type_info;
        inline app::AdvancedDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c__Class>(type_info, "", "AdvancedDebugMenuPage", "<>c");
        }
        inline app::AdvancedDebugMenuPage_c* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c
} // namespace app::classes::types
