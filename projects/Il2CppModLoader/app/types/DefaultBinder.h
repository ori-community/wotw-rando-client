#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultBinder__Class** type_info;
        inline app::DefaultBinder__Class* get_class() {
            return il2cpp::get_class<app::DefaultBinder__Class>(type_info, "System", "DefaultBinder");
        }
        inline app::DefaultBinder* create() {
            return il2cpp::create_object<app::DefaultBinder>(get_class());
        }
    } // namespace DefaultBinder
} // namespace app::classes::types
