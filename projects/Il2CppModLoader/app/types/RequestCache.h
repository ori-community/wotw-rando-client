#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCache__Class** type_info;
        inline app::RequestCache__Class* get_class() {
            return il2cpp::get_class<app::RequestCache__Class>(type_info, "System.Net.Cache", "RequestCache");
        }
        inline app::RequestCache* create() {
            return il2cpp::create_object<app::RequestCache>(get_class());
        }
    } // namespace RequestCache
} // namespace app::classes::types
