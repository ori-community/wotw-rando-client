#pragma once
#include <Modloader/app/structs/ListenerAsyncResult.h>
#include <Modloader/app/structs/ListenerAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListenerAsyncResult {
        inline app::ListenerAsyncResult__Class** type_info() {
            static app::ListenerAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListenerAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04744AC0));
            }
            return cache;
        }
        inline app::ListenerAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::ListenerAsyncResult__Class>(type_info(), "System.Net", "ListenerAsyncResult");
        }
        inline app::ListenerAsyncResult* create() {
            return il2cpp::create_object<app::ListenerAsyncResult>(get_class());
        }
    } // namespace ListenerAsyncResult
} // namespace app::classes::types
