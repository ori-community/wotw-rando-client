#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballSpawnSetup {
        inline app::GasballSpawnSetup__Class** type_info = (app::GasballSpawnSetup__Class**)(modloader::win::memory::resolve_rva(0x04728068));
        inline app::GasballSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::GasballSpawnSetup__Class>(type_info, "", "GasballSpawnSetup");
        }
        inline app::GasballSpawnSetup* create() {
            return il2cpp::create_object<app::GasballSpawnSetup>(get_class());
        }
    } // namespace GasballSpawnSetup
} // namespace app::classes::types
