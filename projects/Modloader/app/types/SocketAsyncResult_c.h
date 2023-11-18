#pragma once
#include <Modloader/app/structs/SocketAsyncResult_c.h>
#include <Modloader/app/structs/SocketAsyncResult_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketAsyncResult_c {
        inline app::SocketAsyncResult_c__Class** type_info() {
            static app::SocketAsyncResult_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SocketAsyncResult_c__Class**)(modloader::win::memory::resolve_rva(0x0470EB88));
            }
            return cache;
        }
        inline app::SocketAsyncResult_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SocketAsyncResult_c__Class>(type_info(), "System.Net.Sockets", "SocketAsyncResult", "<>c");
        }
        inline app::SocketAsyncResult_c* create() {
            return il2cpp::create_object<app::SocketAsyncResult_c>(get_class());
        }
    } // namespace SocketAsyncResult_c
} // namespace app::classes::types
