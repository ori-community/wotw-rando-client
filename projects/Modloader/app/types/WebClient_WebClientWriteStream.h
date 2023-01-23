#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebClient_WebClientWriteStream__Class.h>
#include <Modloader/app/structs/WebClient_WebClientWriteStream.h>

namespace app::classes::types {
    namespace WebClient_WebClientWriteStream {
        inline app::WebClient_WebClientWriteStream__Class** type_info = (app::WebClient_WebClientWriteStream__Class**)(modloader::win::memory::resolve_rva(0x0472ED10));
        inline app::WebClient_WebClientWriteStream__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_WebClientWriteStream__Class>(type_info, "System.Net", "WebClient", "WebClientWriteStream");
        }
        inline app::WebClient_WebClientWriteStream* create() {
            return il2cpp::create_object<app::WebClient_WebClientWriteStream>(get_class());
        }
    } // namespace WebClient_WebClientWriteStream
} // namespace app::classes::types
