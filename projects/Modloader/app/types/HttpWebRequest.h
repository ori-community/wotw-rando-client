#pragma once
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/HttpWebRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequest {
        inline app::HttpWebRequest__Class** type_info() {
            static app::HttpWebRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04797D90));
            }
            return cache;
        }
        inline app::HttpWebRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequest__Class>(type_info(), "System.Net", "HttpWebRequest");
        }
        inline app::HttpWebRequest* create() {
            return il2cpp::create_object<app::HttpWebRequest>(get_class());
        }
    } // namespace HttpWebRequest
} // namespace app::classes::types
