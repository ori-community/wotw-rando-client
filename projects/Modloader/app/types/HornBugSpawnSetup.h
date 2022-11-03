#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugSpawnSetup {
        inline app::HornBugSpawnSetup__Class** type_info = (app::HornBugSpawnSetup__Class**)(modloader::win::memory::resolve_rva(0x0478FE98));
        inline app::HornBugSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::HornBugSpawnSetup__Class>(type_info, "", "HornBugSpawnSetup");
        }
        inline app::HornBugSpawnSetup* create() {
            return il2cpp::create_object<app::HornBugSpawnSetup>(get_class());
        }
    } // namespace HornBugSpawnSetup
} // namespace app::classes::types
