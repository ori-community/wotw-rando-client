#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadDebugMenuPage_c__Class** type_info;
        inline app::LoadDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_c__Class>(type_info, "", "LoadDebugMenuPage", "<>c");
        }
        inline app::LoadDebugMenuPage_c* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_c>(get_class());
        }
    } // namespace LoadDebugMenuPage_c
} // namespace app::classes::types
