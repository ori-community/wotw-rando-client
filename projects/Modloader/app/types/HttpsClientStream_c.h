#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpsClientStream_c {
        inline app::HttpsClientStream_c__Class** type_info = (app::HttpsClientStream_c__Class**)(modloader::win::memory::resolve_rva(0x0474DEA0));
        inline app::HttpsClientStream_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpsClientStream_c__Class>(type_info, "Mono.Security.Protocol.Tls", "HttpsClientStream", "<>c");
        }
        inline app::HttpsClientStream_c* create() {
            return il2cpp::create_object<app::HttpsClientStream_c>(get_class());
        }
    } // namespace HttpsClientStream_c
} // namespace app::classes::types
