#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebClient_WebClientWriteStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebClient_WebClientWriteStream__Class** type_info;
        inline app::WebClient_WebClientWriteStream__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_WebClientWriteStream__Class>(type_info, "System.Net", "WebClient", "WebClientWriteStream");
        }
        inline app::WebClient_WebClientWriteStream* create() {
            return il2cpp::create_object<app::WebClient_WebClientWriteStream>(get_class());
        }
    } // namespace WebClient_WebClientWriteStream
} // namespace app::classes::types
