#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumetricPointLight {
        namespace {
            app::VolumetricPointLight__Class* type_info_ref = nullptr;
        }
        app::VolumetricPointLight__Class** type_info = &type_info_ref;
        inline app::VolumetricPointLight__Class* get_class() {
            return il2cpp::get_class<app::VolumetricPointLight__Class>(type_info, "Moon.Rendering", "VolumetricPointLight");
        }
        inline app::VolumetricPointLight* create() {
            return il2cpp::create_object<app::VolumetricPointLight>(get_class());
        }
        inline app::VolumetricPointLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumetricPointLight__Array>(get_class(), size);
        }
    } // namespace VolumetricPointLight
} // namespace app::classes::types
