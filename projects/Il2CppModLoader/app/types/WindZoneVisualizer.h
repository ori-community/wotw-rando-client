#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindZoneVisualizer {
        namespace {
            app::WindZoneVisualizer__Class* type_info_ref = nullptr;
        }
        app::WindZoneVisualizer__Class** type_info = &type_info_ref;
        inline app::WindZoneVisualizer__Class* get_class() {
            return il2cpp::get_class<app::WindZoneVisualizer__Class>(type_info, "", "WindZoneVisualizer");
        }
        inline app::WindZoneVisualizer* create() {
            return il2cpp::create_object<app::WindZoneVisualizer>(get_class());
        }
    } // namespace WindZoneVisualizer
} // namespace app::classes::types
