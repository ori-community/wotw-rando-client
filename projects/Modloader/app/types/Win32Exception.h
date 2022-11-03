#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Win32Exception {
        inline app::Win32Exception__Class** type_info = (app::Win32Exception__Class**)(modloader::win::memory::resolve_rva(0x0472CA20));
        inline app::Win32Exception__Class* get_class() {
            return il2cpp::get_class<app::Win32Exception__Class>(type_info, "System.ComponentModel", "Win32Exception");
        }
        inline app::Win32Exception* create() {
            return il2cpp::create_object<app::Win32Exception>(get_class());
        }
    } // namespace Win32Exception
} // namespace app::classes::types
