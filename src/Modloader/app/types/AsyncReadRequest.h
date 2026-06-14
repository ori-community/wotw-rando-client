#pragma once
#include <Modloader/app/structs/AsyncReadRequest.h>
#include <Modloader/app/structs/AsyncReadRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncReadRequest {
        inline app::AsyncReadRequest__Class** type_info() {
            static app::AsyncReadRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncReadRequest__Class**)(modloader::win::memory::resolve_rva(0x0477F410));
            }
            return cache;
        }
        inline app::AsyncReadRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncReadRequest__Class>(type_info(), "Mono.Net.Security", "AsyncReadRequest");
        }
        inline app::AsyncReadRequest* create() {
            return il2cpp::create_object<app::AsyncReadRequest>(get_class());
        }
    } // namespace AsyncReadRequest
} // namespace app::classes::types
