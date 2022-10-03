#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebHeaderCollection__Class** type_info;
        inline app::WebHeaderCollection__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollection__Class>(type_info, "System.Net", "WebHeaderCollection");
        }
        inline app::WebHeaderCollection* create() {
            return il2cpp::create_object<app::WebHeaderCollection>(get_class());
        }
    } // namespace WebHeaderCollection
} // namespace app::classes::types
