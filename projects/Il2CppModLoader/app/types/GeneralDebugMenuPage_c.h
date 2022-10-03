#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GeneralDebugMenuPage_c__Class** type_info;
        inline app::GeneralDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c__Class>(type_info, "", "GeneralDebugMenuPage", "<>c");
        }
        inline app::GeneralDebugMenuPage_c* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c
} // namespace app::classes::types
