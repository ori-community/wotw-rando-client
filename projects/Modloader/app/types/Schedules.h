#pragma once
#include <Modloader/app/structs/Schedules.h>
#include <Modloader/app/structs/Schedules__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Schedules {
        inline app::Schedules__Class** type_info() {
            static app::Schedules__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Schedules__Class**)(modloader::win::memory::resolve_rva(0x0476AE80));
            }
            return cache;
        }
        inline app::Schedules__Class* get_class() {
            return il2cpp::get_class<app::Schedules__Class>(type_info(), "Core", "Schedules");
        }
        inline app::Schedules* create() {
            return il2cpp::create_object<app::Schedules>(get_class());
        }
    } // namespace Schedules
} // namespace app::classes::types
