#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SocketAsyncEventArgs__Class.h>
#include <Modloader/app/structs/SocketAsyncEventArgs.h>

namespace app::classes::types {
    namespace SocketAsyncEventArgs {
        inline app::SocketAsyncEventArgs__Class** type_info = (app::SocketAsyncEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04748DA0));
        inline app::SocketAsyncEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncEventArgs__Class>(type_info, "System.Net.Sockets", "SocketAsyncEventArgs");
        }
        inline app::SocketAsyncEventArgs* create() {
            return il2cpp::create_object<app::SocketAsyncEventArgs>(get_class());
        }
    } // namespace SocketAsyncEventArgs
} // namespace app::classes::types
