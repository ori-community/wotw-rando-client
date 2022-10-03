#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerPrefixCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerPrefixCollection__Class** type_info;
        inline app::HttpListenerPrefixCollection__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerPrefixCollection__Class>(type_info, "System.Net", "HttpListenerPrefixCollection");
        }
        inline app::HttpListenerPrefixCollection* create() {
            return il2cpp::create_object<app::HttpListenerPrefixCollection>(get_class());
        }
    } // namespace HttpListenerPrefixCollection
} // namespace app::classes::types
