#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPinnable {
        inline app::IPinnable__Class** type_info = (app::IPinnable__Class**)(modloader::win::memory::resolve_rva(0x04740580));
        inline app::IPinnable__Class* get_class() {
            return il2cpp::get_class<app::IPinnable__Class>(type_info, "", "IPinnable");
        }
    } // namespace IPinnable
} // namespace app::classes::types
