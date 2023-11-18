#pragma once
#include <Modloader/app/structs/MinerSpawnSetup.h>
#include <Modloader/app/structs/MinerSpawnSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnSetup {
        inline app::MinerSpawnSetup__Class** type_info() {
            static app::MinerSpawnSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MinerSpawnSetup__Class**)(modloader::win::memory::resolve_rva(0x04742FF8));
            }
            return cache;
        }
        inline app::MinerSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnSetup__Class>(type_info(), "", "MinerSpawnSetup");
        }
        inline app::MinerSpawnSetup* create() {
            return il2cpp::create_object<app::MinerSpawnSetup>(get_class());
        }
    } // namespace MinerSpawnSetup
} // namespace app::classes::types
