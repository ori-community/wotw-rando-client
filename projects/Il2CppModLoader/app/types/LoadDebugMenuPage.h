#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadDebugMenuPage__Class** type_info;
        inline app::LoadDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::LoadDebugMenuPage__Class>(type_info, "", "LoadDebugMenuPage");
        }
        inline app::LoadDebugMenuPage* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage>(get_class());
        }
    } // namespace LoadDebugMenuPage
} // namespace app::classes::types
