#pragma once
#include <Modloader/app/structs/HttpsClientStream_c.h>
#include <Modloader/app/structs/HttpsClientStream_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpsClientStream_c {
        inline app::HttpsClientStream_c__Class** type_info() {
            static app::HttpsClientStream_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpsClientStream_c__Class**)(modloader::win::memory::resolve_rva(0x0474DEA0));
            }
            return cache;
        }
        inline app::HttpsClientStream_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpsClientStream_c__Class>(type_info(), "Mono.Security.Protocol.Tls", "HttpsClientStream", "<>c");
        }
        inline app::HttpsClientStream_c* create() {
            return il2cpp::create_object<app::HttpsClientStream_c>(get_class());
        }
    } // namespace HttpsClientStream_c
} // namespace app::classes::types
