#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SlugPlaceholder__Class** type_info;
        inline app::SlugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SlugPlaceholder__Class>(type_info, "", "SlugPlaceholder");
        }
        inline app::SlugPlaceholder* create() {
            return il2cpp::create_object<app::SlugPlaceholder>(get_class());
        }
    } // namespace SlugPlaceholder
} // namespace app::classes::types
