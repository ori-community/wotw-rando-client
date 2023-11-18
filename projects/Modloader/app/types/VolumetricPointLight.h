#pragma once
#include <Modloader/app/structs/VolumetricPointLight.h>
#include <Modloader/app/structs/VolumetricPointLight__Array.h>
#include <Modloader/app/structs/VolumetricPointLight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricPointLight {
        inline app::VolumetricPointLight__Class** type_info() {
            static app::VolumetricPointLight__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricPointLight__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricPointLight__Class* get_class() {
            return il2cpp::get_class<app::VolumetricPointLight__Class>(type_info(), "Moon.Rendering", "VolumetricPointLight");
        }
        inline app::VolumetricPointLight* create() {
            return il2cpp::create_object<app::VolumetricPointLight>(get_class());
        }
        inline app::VolumetricPointLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumetricPointLight__Array>(get_class(), size);
        }
        inline app::VolumetricPointLight__Array* create_array(const std::vector<app::VolumetricPointLight*>& items) {
            return il2cpp::array_new<app::VolumetricPointLight__Array>(get_class(), items);
        }
    } // namespace VolumetricPointLight
} // namespace app::classes::types
