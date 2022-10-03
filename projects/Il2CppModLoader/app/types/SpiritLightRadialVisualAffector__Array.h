#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightRadialVisualAffector__Array {
        namespace {
            app::SpiritLightRadialVisualAffector__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritLightRadialVisualAffector__Array__Class** type_info = &type_info_ref;
        inline app::SpiritLightRadialVisualAffector__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightRadialVisualAffector__Array__Class>(type_info, "", "SpiritLightRadialVisualAffector[]");
        }
        inline app::SpiritLightRadialVisualAffector__Array* create() {
            return il2cpp::create_object<app::SpiritLightRadialVisualAffector__Array>(get_class());
        }
    } // namespace SpiritLightRadialVisualAffector__Array
} // namespace app::classes::types
