#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatSwarm {
        inline app::BatSwarm__Class** type_info = (app::BatSwarm__Class**)(modloader::win::memory::resolve_rva(0x04775A88));
        inline app::BatSwarm__Class* get_class() {
            return il2cpp::get_class<app::BatSwarm__Class>(type_info, "", "BatSwarm");
        }
        inline app::BatSwarm* create() {
            return il2cpp::create_object<app::BatSwarm>(get_class());
        }
    } // namespace BatSwarm
} // namespace app::classes::types
