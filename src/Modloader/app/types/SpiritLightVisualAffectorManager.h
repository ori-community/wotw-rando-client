#pragma once
#include <Modloader/app/structs/SpiritLightVisualAffectorManager.h>
#include <Modloader/app/structs/SpiritLightVisualAffectorManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightVisualAffectorManager {
        inline app::SpiritLightVisualAffectorManager__Class** type_info() {
            static app::SpiritLightVisualAffectorManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritLightVisualAffectorManager__Class**)(modloader::win::memory::resolve_rva(0x04761548));
            }
            return cache;
        }
        inline app::SpiritLightVisualAffectorManager__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightVisualAffectorManager__Class>(type_info(), "", "SpiritLightVisualAffectorManager");
        }
        inline app::SpiritLightVisualAffectorManager* create() {
            return il2cpp::create_object<app::SpiritLightVisualAffectorManager>(get_class());
        }
    } // namespace SpiritLightVisualAffectorManager
} // namespace app::classes::types
