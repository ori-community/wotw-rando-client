#pragma once
#include <Modloader/app/structs/HealthController_c.h>
#include <Modloader/app/structs/HealthController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthController_c {
        inline app::HealthController_c__Class** type_info() {
            static app::HealthController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HealthController_c__Class**)(modloader::win::memory::resolve_rva(0x047588C0));
            }
            return cache;
        }
        inline app::HealthController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthController_c__Class>(type_info(), "", "HealthController", "<>c");
        }
        inline app::HealthController_c* create() {
            return il2cpp::create_object<app::HealthController_c>(get_class());
        }
    } // namespace HealthController_c
} // namespace app::classes::types
