#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncHandshakeRequest__Class.h>
#include <Modloader/app/structs/AsyncHandshakeRequest.h>

namespace app::classes::types {
    namespace AsyncHandshakeRequest {
        inline app::AsyncHandshakeRequest__Class** type_info = (app::AsyncHandshakeRequest__Class**)(modloader::win::memory::resolve_rva(0x04789210));
        inline app::AsyncHandshakeRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncHandshakeRequest__Class>(type_info, "Mono.Net.Security", "AsyncHandshakeRequest");
        }
        inline app::AsyncHandshakeRequest* create() {
            return il2cpp::create_object<app::AsyncHandshakeRequest>(get_class());
        }
    } // namespace AsyncHandshakeRequest
} // namespace app::classes::types
