#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidationHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidationHelper__Class** type_info;
        inline app::ValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ValidationHelper__Class>(type_info, "System.Net", "ValidationHelper");
        }
        inline app::ValidationHelper* create() {
            return il2cpp::create_object<app::ValidationHelper>(get_class());
        }
    } // namespace ValidationHelper
} // namespace app::classes::types
