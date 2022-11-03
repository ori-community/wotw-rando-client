#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightCapsuleVisualAffector {
        inline app::SpiritLightCapsuleVisualAffector__Class** type_info = (app::SpiritLightCapsuleVisualAffector__Class**)(modloader::win::memory::resolve_rva(0x0475C3A0));
        inline app::SpiritLightCapsuleVisualAffector__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightCapsuleVisualAffector__Class>(type_info, "", "SpiritLightCapsuleVisualAffector");
        }
        inline app::SpiritLightCapsuleVisualAffector* create() {
            return il2cpp::create_object<app::SpiritLightCapsuleVisualAffector>(get_class());
        }
        inline app::SpiritLightCapsuleVisualAffector__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightCapsuleVisualAffector__Array>(get_class(), size);
        }
        inline app::SpiritLightCapsuleVisualAffector__Array* create_array(const std::vector<app::SpiritLightCapsuleVisualAffector*>& items) {
            return il2cpp::array_new<app::SpiritLightCapsuleVisualAffector__Array>(get_class(), items);
        }
    } // namespace SpiritLightCapsuleVisualAffector
} // namespace app::classes::types
