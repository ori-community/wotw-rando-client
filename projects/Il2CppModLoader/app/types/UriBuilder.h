#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriBuilder__Class** type_info;
        inline app::UriBuilder__Class* get_class() {
            return il2cpp::get_class<app::UriBuilder__Class>(type_info, "System", "UriBuilder");
        }
        inline app::UriBuilder* create() {
            return il2cpp::create_object<app::UriBuilder>(get_class());
        }
    } // namespace UriBuilder
} // namespace app::classes::types
