#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListener__Class** type_info;
        inline app::HttpListener__Class* get_class() {
            return il2cpp::get_class<app::HttpListener__Class>(type_info, "System.Net", "HttpListener");
        }
        inline app::HttpListener* create() {
            return il2cpp::create_object<app::HttpListener>(get_class());
        }
    } // namespace HttpListener
} // namespace app::classes::types
