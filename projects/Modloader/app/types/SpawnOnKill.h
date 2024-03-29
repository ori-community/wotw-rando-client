#pragma once
#include <Modloader/app/structs/SpawnOnKill.h>
#include <Modloader/app/structs/SpawnOnKill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnOnKill {
        inline app::SpawnOnKill__Class** type_info() {
            static app::SpawnOnKill__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpawnOnKill__Class**)(modloader::win::memory::resolve_rva(0x0476BC48));
            }
            return cache;
        }
        inline app::SpawnOnKill__Class* get_class() {
            return il2cpp::get_class<app::SpawnOnKill__Class>(type_info(), "", "SpawnOnKill");
        }
        inline app::SpawnOnKill* create() {
            return il2cpp::create_object<app::SpawnOnKill>(get_class());
        }
    } // namespace SpawnOnKill
} // namespace app::classes::types
