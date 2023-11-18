#pragma once
#include <Modloader/app/structs/HttpsClientStream.h>
#include <Modloader/app/structs/HttpsClientStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpsClientStream {
        inline app::HttpsClientStream__Class** type_info() {
            static app::HttpsClientStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpsClientStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpsClientStream__Class* get_class() {
            return il2cpp::get_class<app::HttpsClientStream__Class>(type_info(), "Mono.Security.Protocol.Tls", "HttpsClientStream");
        }
        inline app::HttpsClientStream* create() {
            return il2cpp::create_object<app::HttpsClientStream>(get_class());
        }
    } // namespace HttpsClientStream
} // namespace app::classes::types
