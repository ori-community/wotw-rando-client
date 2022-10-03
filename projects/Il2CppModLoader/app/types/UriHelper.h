#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriHelper__Class** type_info;
        inline app::UriHelper__Class* get_class() {
            return il2cpp::get_class<app::UriHelper__Class>(type_info, "System", "UriHelper");
        }
        inline app::UriHelper* create() {
            return il2cpp::create_object<app::UriHelper>(get_class());
        }
    } // namespace UriHelper
} // namespace app::classes::types
