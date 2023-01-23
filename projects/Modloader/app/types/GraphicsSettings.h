#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GraphicsSettings__Class.h>
#include <Modloader/app/structs/GraphicsSettings.h>

namespace app::classes::types {
    namespace GraphicsSettings {
        namespace {
            inline app::GraphicsSettings__Class* type_info_ref = nullptr;
        }
        inline app::GraphicsSettings__Class** type_info = &type_info_ref;
        inline app::GraphicsSettings__Class* get_class() {
            return il2cpp::get_class<app::GraphicsSettings__Class>(type_info, "UnityEngine.Rendering", "GraphicsSettings");
        }
        inline app::GraphicsSettings* create() {
            return il2cpp::create_object<app::GraphicsSettings>(get_class());
        }
    } // namespace GraphicsSettings
} // namespace app::classes::types
