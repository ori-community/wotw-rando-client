#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumetricConfig__Class.h>
#include <Modloader/app/structs/VolumetricConfig.h>

namespace app::classes::types {
    namespace VolumetricConfig {
        namespace {
            inline app::VolumetricConfig__Class* type_info_ref = nullptr;
        }
        inline app::VolumetricConfig__Class** type_info = &type_info_ref;
        inline app::VolumetricConfig__Class* get_class() {
            return il2cpp::get_class<app::VolumetricConfig__Class>(type_info, "Moon.Rendering", "VolumetricConfig");
        }
        inline app::VolumetricConfig* create() {
            return il2cpp::create_object<app::VolumetricConfig>(get_class());
        }
    } // namespace VolumetricConfig
} // namespace app::classes::types
