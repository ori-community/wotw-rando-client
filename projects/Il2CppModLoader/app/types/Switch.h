#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Switch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Switch__Class** type_info;
        inline app::Switch__Class* get_class() {
            return il2cpp::get_class<app::Switch__Class>(type_info, "System.Diagnostics", "Switch");
        }
        inline app::Switch* create() {
            return il2cpp::create_object<app::Switch>(get_class());
        }
    } // namespace Switch
} // namespace app::classes::types
