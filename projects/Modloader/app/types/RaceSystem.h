#pragma once
#include <Modloader/app/structs/RaceSystem.h>
#include <Modloader/app/structs/RaceSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSystem {
        inline app::RaceSystem__Class** type_info() {
            static app::RaceSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceSystem__Class**)(modloader::win::memory::resolve_rva(0x047354E0));
            }
            return cache;
        }
        inline app::RaceSystem__Class* get_class() {
            return il2cpp::get_class<app::RaceSystem__Class>(type_info(), "", "RaceSystem");
        }
        inline app::RaceSystem* create() {
            return il2cpp::create_object<app::RaceSystem>(get_class());
        }
    } // namespace RaceSystem
} // namespace app::classes::types
