#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListArgumentProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListArgumentProvider__Class** type_info;
        inline app::ListArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::ListArgumentProvider__Class>(type_info, "System.Dynamic.Utils", "ListArgumentProvider");
        }
        inline app::ListArgumentProvider* create() {
            return il2cpp::create_object<app::ListArgumentProvider>(get_class());
        }
    } // namespace ListArgumentProvider
} // namespace app::classes::types
