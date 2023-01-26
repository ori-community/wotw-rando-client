#pragma once
#include <Modloader/app/structs/HornBugSpawnSetup.h>
#include <Modloader/app/structs/HornBugSpawnSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnSetup {
        inline app::HornBugSpawnSetup__Class** type_info() {
            static app::HornBugSpawnSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HornBugSpawnSetup__Class**)(modloader::win::memory::resolve_rva(0x0478FE98));
            }
            return cache;
        }
        inline app::HornBugSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::HornBugSpawnSetup__Class>(type_info(), "", "HornBugSpawnSetup");
        }
        inline app::HornBugSpawnSetup* create() {
            return il2cpp::create_object<app::HornBugSpawnSetup>(get_class());
        }
    } // namespace HornBugSpawnSetup
} // namespace app::classes::types
