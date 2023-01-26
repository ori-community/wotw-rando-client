#pragma once
#include <Modloader/app/structs/SpawnOrbsContext.h>
#include <Modloader/app/structs/SpawnOrbsContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnOrbsContext {
        inline app::SpawnOrbsContext__Class** type_info() {
            static app::SpawnOrbsContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpawnOrbsContext__Class**)(modloader::win::memory::resolve_rva(0x047741D0));
            }
            return cache;
        }
        inline app::SpawnOrbsContext__Class* get_class() {
            return il2cpp::get_class<app::SpawnOrbsContext__Class>(type_info(), "", "SpawnOrbsContext");
        }
        inline app::SpawnOrbsContext* create() {
            return il2cpp::create_object<app::SpawnOrbsContext>(get_class());
        }
    } // namespace SpawnOrbsContext
} // namespace app::classes::types
