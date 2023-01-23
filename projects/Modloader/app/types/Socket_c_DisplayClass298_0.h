#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Socket_c_DisplayClass298_0__Class.h>
#include <Modloader/app/structs/Socket_c_DisplayClass298_0.h>

namespace app::classes::types {
    namespace Socket_c_DisplayClass298_0 {
        inline app::Socket_c_DisplayClass298_0__Class** type_info = (app::Socket_c_DisplayClass298_0__Class**)(modloader::win::memory::resolve_rva(0x04750A90));
        inline app::Socket_c_DisplayClass298_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Socket_c_DisplayClass298_0__Class>(type_info, "System.Net.Sockets", "Socket", "<>c__DisplayClass298_0");
        }
        inline app::Socket_c_DisplayClass298_0* create() {
            return il2cpp::create_object<app::Socket_c_DisplayClass298_0>(get_class());
        }
    } // namespace Socket_c_DisplayClass298_0
} // namespace app::classes::types
