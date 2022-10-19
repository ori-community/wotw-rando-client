#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketAsyncResult_c {
        inline app::SocketAsyncResult_c__Class** type_info = (app::SocketAsyncResult_c__Class**)(modloader::win::memory::resolve_rva(0x0470EB88));
        inline app::SocketAsyncResult_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SocketAsyncResult_c__Class>(type_info, "System.Net.Sockets", "SocketAsyncResult", "<>c");
        }
        inline app::SocketAsyncResult_c* create() {
            return il2cpp::create_object<app::SocketAsyncResult_c>(get_class());
        }
    } // namespace SocketAsyncResult_c
} // namespace app::classes::types
