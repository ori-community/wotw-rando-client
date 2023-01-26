#pragma once
#include <Modloader/app/structs/HttpListenerRequest.h>
#include <Modloader/app/structs/HttpListenerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequest {
        inline app::HttpListenerRequest__Class** type_info() {
            static app::HttpListenerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListenerRequest__Class**)(modloader::win::memory::resolve_rva(0x04715F70));
            }
            return cache;
        }
        inline app::HttpListenerRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequest__Class>(type_info(), "System.Net", "HttpListenerRequest");
        }
        inline app::HttpListenerRequest* create() {
            return il2cpp::create_object<app::HttpListenerRequest>(get_class());
        }
    } // namespace HttpListenerRequest
} // namespace app::classes::types
