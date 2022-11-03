#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpawnOrbsContext {
        inline app::SpawnOrbsContext__Class** type_info = (app::SpawnOrbsContext__Class**)(modloader::win::memory::resolve_rva(0x047741D0));
        inline app::SpawnOrbsContext__Class* get_class() {
            return il2cpp::get_class<app::SpawnOrbsContext__Class>(type_info, "", "SpawnOrbsContext");
        }
        inline app::SpawnOrbsContext* create() {
            return il2cpp::create_object<app::SpawnOrbsContext>(get_class());
        }
    } // namespace SpawnOrbsContext
} // namespace app::classes::types
