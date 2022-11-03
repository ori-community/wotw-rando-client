#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IChangeTracking {
        inline app::IChangeTracking__Class** type_info = (app::IChangeTracking__Class**)(modloader::win::memory::resolve_rva(0x047168F0));
        inline app::IChangeTracking__Class* get_class() {
            return il2cpp::get_class<app::IChangeTracking__Class>(type_info, "System.ComponentModel", "IChangeTracking");
        }
    } // namespace IChangeTracking
} // namespace app::classes::types
