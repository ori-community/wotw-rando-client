#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Socket_c_DisplayClass242_0 {
        inline app::Socket_c_DisplayClass242_0__Class** type_info = (app::Socket_c_DisplayClass242_0__Class**)(modloader::win::memory::resolve_rva(0x04730B28));
        inline app::Socket_c_DisplayClass242_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Socket_c_DisplayClass242_0__Class>(type_info, "System.Net.Sockets", "Socket", "<>c__DisplayClass242_0");
        }
        inline app::Socket_c_DisplayClass242_0* create() {
            return il2cpp::create_object<app::Socket_c_DisplayClass242_0>(get_class());
        }
    } // namespace Socket_c_DisplayClass242_0
} // namespace app::classes::types
