#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumetricConfig {
        namespace {
            app::VolumetricConfig__Class* type_info_ref = nullptr;
        }
        app::VolumetricConfig__Class** type_info = &type_info_ref;
        inline app::VolumetricConfig__Class* get_class() {
            return il2cpp::get_class<app::VolumetricConfig__Class>(type_info, "Moon.Rendering", "VolumetricConfig");
        }
        inline app::VolumetricConfig* create() {
            return il2cpp::create_object<app::VolumetricConfig>(get_class());
        }
    } // namespace VolumetricConfig
} // namespace app::classes::types
