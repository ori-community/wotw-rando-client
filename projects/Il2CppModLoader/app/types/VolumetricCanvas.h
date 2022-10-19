#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumetricCanvas {
        namespace {
            inline app::VolumetricCanvas__Class* type_info_ref = nullptr;
        }
        inline app::VolumetricCanvas__Class** type_info = &type_info_ref;
        inline app::VolumetricCanvas__Class* get_class() {
            return il2cpp::get_class<app::VolumetricCanvas__Class>(type_info, "Moon.Rendering", "VolumetricCanvas");
        }
        inline app::VolumetricCanvas* create() {
            return il2cpp::create_object<app::VolumetricCanvas>(get_class());
        }
    } // namespace VolumetricCanvas
} // namespace app::classes::types
