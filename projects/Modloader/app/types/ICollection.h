#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICollection__Class.h>

namespace app::classes::types {
    namespace ICollection {
        inline app::ICollection__Class** type_info = (app::ICollection__Class**)(modloader::win::memory::resolve_rva(0x0473B3F0));
        inline app::ICollection__Class* get_class() {
            return il2cpp::get_class<app::ICollection__Class>(type_info, "System.Collections", "ICollection");
        }
    } // namespace ICollection
} // namespace app::classes::types
