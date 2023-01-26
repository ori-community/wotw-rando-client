#pragma once
#include <Modloader/app/structs/SocketAsyncResult.h>
#include <Modloader/app/structs/SocketAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketAsyncResult {
        inline app::SocketAsyncResult__Class** type_info() {
            static app::SocketAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SocketAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0472C388));
            }
            return cache;
        }
        inline app::SocketAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncResult__Class>(type_info(), "System.Net.Sockets", "SocketAsyncResult");
        }
        inline app::SocketAsyncResult* create() {
            return il2cpp::create_object<app::SocketAsyncResult>(get_class());
        }
    } // namespace SocketAsyncResult
} // namespace app::classes::types
