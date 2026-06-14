#pragma once
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Array.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightRadialVisualAffector {
        inline app::SpiritLightRadialVisualAffector__Class** type_info() {
            static app::SpiritLightRadialVisualAffector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritLightRadialVisualAffector__Class**)(modloader::win::memory::resolve_rva(0x0475C368));
            }
            return cache;
        }
        inline app::SpiritLightRadialVisualAffector__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightRadialVisualAffector__Class>(type_info(), "", "SpiritLightRadialVisualAffector");
        }
        inline app::SpiritLightRadialVisualAffector* create() {
            return il2cpp::create_object<app::SpiritLightRadialVisualAffector>(get_class());
        }
        inline app::SpiritLightRadialVisualAffector__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightRadialVisualAffector__Array>(get_class(), size);
        }
        inline app::SpiritLightRadialVisualAffector__Array* create_array(const std::vector<app::SpiritLightRadialVisualAffector*>& items) {
            return il2cpp::array_new<app::SpiritLightRadialVisualAffector__Array>(get_class(), items);
        }
    } // namespace SpiritLightRadialVisualAffector
} // namespace app::classes::types
