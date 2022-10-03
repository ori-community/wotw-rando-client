#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Volumetric {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Volumetric__Class** type_info;
        inline app::Volumetric__Class* get_class() {
            return il2cpp::get_class<app::Volumetric__Class>(type_info, "Moon.Rendering", "Volumetric");
        }
        inline app::Volumetric* create() {
            return il2cpp::create_object<app::Volumetric>(get_class());
        }
    } // namespace Volumetric
} // namespace app::classes::types
