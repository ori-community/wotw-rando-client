#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncHelper__Class** type_info;
        inline app::AsyncHelper__Class* get_class() {
            return il2cpp::get_class<app::AsyncHelper__Class>(type_info, "System.Xml", "AsyncHelper");
        }
        inline app::AsyncHelper* create() {
            return il2cpp::create_object<app::AsyncHelper>(get_class());
        }
    } // namespace AsyncHelper
} // namespace app::classes::types
