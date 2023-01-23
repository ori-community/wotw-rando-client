#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncRequest__Class.h>
#include <Modloader/app/structs/AsyncRequest.h>

namespace app::classes::types {
    namespace AsyncRequest {
        inline app::AsyncRequest__Class** type_info = (app::AsyncRequest__Class**)(modloader::win::memory::resolve_rva(0x04704FD8));
        inline app::AsyncRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncRequest__Class>(type_info, "System.Runtime.Remoting.Channels", "AsyncRequest");
        }
        inline app::AsyncRequest* create() {
            return il2cpp::create_object<app::AsyncRequest>(get_class());
        }
    } // namespace AsyncRequest
} // namespace app::classes::types
