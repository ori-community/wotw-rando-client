#pragma once
#include <Modloader/app/structs/WebClient_WebClientWriteStream.h>
#include <Modloader/app/structs/WebClient_WebClientWriteStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClient_WebClientWriteStream {
        inline app::WebClient_WebClientWriteStream__Class** type_info() {
            static app::WebClient_WebClientWriteStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClient_WebClientWriteStream__Class**)(modloader::win::memory::resolve_rva(0x0472ED10));
            }
            return cache;
        }
        inline app::WebClient_WebClientWriteStream__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_WebClientWriteStream__Class>(type_info(), "System.Net", "WebClient", "WebClientWriteStream");
        }
        inline app::WebClient_WebClientWriteStream* create() {
            return il2cpp::create_object<app::WebClient_WebClientWriteStream>(get_class());
        }
    } // namespace WebClient_WebClientWriteStream
} // namespace app::classes::types
