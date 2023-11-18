#pragma once
#include <Modloader/app/structs/GasballSpawnSetup.h>
#include <Modloader/app/structs/GasballSpawnSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballSpawnSetup {
        inline app::GasballSpawnSetup__Class** type_info() {
            static app::GasballSpawnSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GasballSpawnSetup__Class**)(modloader::win::memory::resolve_rva(0x04728068));
            }
            return cache;
        }
        inline app::GasballSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::GasballSpawnSetup__Class>(type_info(), "", "GasballSpawnSetup");
        }
        inline app::GasballSpawnSetup* create() {
            return il2cpp::create_object<app::GasballSpawnSetup>(get_class());
        }
    } // namespace GasballSpawnSetup
} // namespace app::classes::types
