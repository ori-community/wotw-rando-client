#pragma once
#include <Modloader/app/structs/AsyncResult.h>
#include <Modloader/app/structs/AsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncResult {
        inline app::AsyncResult__Class** type_info() {
            static app::AsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04710B68));
            }
            return cache;
        }
        inline app::AsyncResult__Class* get_class() {
            return il2cpp::get_class<app::AsyncResult__Class>(type_info(), "System.Runtime.Remoting.Messaging", "AsyncResult");
        }
        inline app::AsyncResult* create() {
            return il2cpp::create_object<app::AsyncResult>(get_class());
        }
    } // namespace AsyncResult
} // namespace app::classes::types
