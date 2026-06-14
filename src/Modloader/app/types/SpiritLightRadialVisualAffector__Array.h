#pragma once
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Array.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightRadialVisualAffector__Array {
        inline app::SpiritLightRadialVisualAffector__Array__Class** type_info() {
            static app::SpiritLightRadialVisualAffector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightRadialVisualAffector__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightRadialVisualAffector__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightRadialVisualAffector__Array__Class>(type_info(), "", "SpiritLightRadialVisualAffector[]");
        }
        inline app::SpiritLightRadialVisualAffector__Array* create() {
            return il2cpp::create_object<app::SpiritLightRadialVisualAffector__Array>(get_class());
        }
    } // namespace SpiritLightRadialVisualAffector__Array
} // namespace app::classes::types
