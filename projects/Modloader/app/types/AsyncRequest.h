#pragma once
#include <Modloader/app/structs/AsyncRequest.h>
#include <Modloader/app/structs/AsyncRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRequest {
        inline app::AsyncRequest__Class** type_info() {
            static app::AsyncRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncRequest__Class**)(modloader::win::memory::resolve_rva(0x04704FD8));
            }
            return cache;
        }
        inline app::AsyncRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncRequest__Class>(type_info(), "System.Runtime.Remoting.Channels", "AsyncRequest");
        }
        inline app::AsyncRequest* create() {
            return il2cpp::create_object<app::AsyncRequest>(get_class());
        }
    } // namespace AsyncRequest
} // namespace app::classes::types
