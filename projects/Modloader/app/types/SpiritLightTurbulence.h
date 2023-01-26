#pragma once
#include <Modloader/app/structs/SpiritLightTurbulence.h>
#include <Modloader/app/structs/SpiritLightTurbulence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightTurbulence {
        inline app::SpiritLightTurbulence__Class** type_info() {
            static app::SpiritLightTurbulence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightTurbulence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightTurbulence__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightTurbulence__Class>(type_info(), "", "SpiritLightTurbulence");
        }
        inline app::SpiritLightTurbulence* create() {
            return il2cpp::create_object<app::SpiritLightTurbulence>(get_class());
        }
    } // namespace SpiritLightTurbulence
} // namespace app::classes::types
