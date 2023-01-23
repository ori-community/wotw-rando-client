#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumetricAreaLight__Class.h>
#include <Modloader/app/structs/VolumetricAreaLight.h>
#include <Modloader/app/structs/VolumetricAreaLight__Array.h>

namespace app::classes::types {
    namespace VolumetricAreaLight {
        namespace {
            inline app::VolumetricAreaLight__Class* type_info_ref = nullptr;
        }
        inline app::VolumetricAreaLight__Class** type_info = &type_info_ref;
        inline app::VolumetricAreaLight__Class* get_class() {
            return il2cpp::get_class<app::VolumetricAreaLight__Class>(type_info, "Moon.Rendering", "VolumetricAreaLight");
        }
        inline app::VolumetricAreaLight* create() {
            return il2cpp::create_object<app::VolumetricAreaLight>(get_class());
        }
        inline app::VolumetricAreaLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumetricAreaLight__Array>(get_class(), size);
        }
        inline app::VolumetricAreaLight__Array* create_array(const std::vector<app::VolumetricAreaLight*>& items) {
            return il2cpp::array_new<app::VolumetricAreaLight__Array>(get_class(), items);
        }
    } // namespace VolumetricAreaLight
} // namespace app::classes::types
