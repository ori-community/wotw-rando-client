#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightVisualAffectorManager {
        inline app::SpiritLightVisualAffectorManager__Class** type_info = (app::SpiritLightVisualAffectorManager__Class**)(modloader::win::memory::resolve_rva(0x04761548));
        inline app::SpiritLightVisualAffectorManager__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightVisualAffectorManager__Class>(type_info, "", "SpiritLightVisualAffectorManager");
        }
        inline app::SpiritLightVisualAffectorManager* create() {
            return il2cpp::create_object<app::SpiritLightVisualAffectorManager>(get_class());
        }
    } // namespace SpiritLightVisualAffectorManager
} // namespace app::classes::types
