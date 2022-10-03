#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWebResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpWebResponse__Class** type_info;
        inline app::HttpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpWebResponse__Class>(type_info, "System.Net", "HttpWebResponse");
        }
        inline app::HttpWebResponse* create() {
            return il2cpp::create_object<app::HttpWebResponse>(get_class());
        }
    } // namespace HttpWebResponse
} // namespace app::classes::types
