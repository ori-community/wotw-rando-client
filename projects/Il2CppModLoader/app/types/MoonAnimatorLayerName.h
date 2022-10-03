#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimatorLayerName__Class** type_info;
        inline app::MoonAnimatorLayerName__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerName__Class>(type_info, "Moon", "MoonAnimatorLayerName");
        }
        inline app::MoonAnimatorLayerName* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerName>(get_class());
        }
        inline app::MoonAnimatorLayerName__Boxed* box(app::MoonAnimatorLayerName value) {
            return il2cpp::box_value<app::MoonAnimatorLayerName__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorLayerName
} // namespace app::classes::types
