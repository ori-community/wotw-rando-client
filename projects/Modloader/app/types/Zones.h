#pragma once
#include <Modloader/app/structs/Zones.h>
#include <Modloader/app/structs/Zones__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Zones {
        inline app::Zones__Class** type_info() {
            static app::Zones__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Zones__Class**)(modloader::win::memory::resolve_rva(0x04735F60));
            }
            return cache;
        }
        inline app::Zones__Class* get_class() {
            return il2cpp::get_class<app::Zones__Class>(type_info(), "Game", "Zones");
        }
        inline app::Zones* create() {
            return il2cpp::create_object<app::Zones>(get_class());
        }
    } // namespace Zones
} // namespace app::classes::types
