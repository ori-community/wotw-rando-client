#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraPlugin__Class.h>
#include <Modloader/app/structs/CameraPlugin.h>

namespace app::classes::types {
    namespace CameraPlugin {
        namespace {
            inline app::CameraPlugin__Class* type_info_ref = nullptr;
        }
        inline app::CameraPlugin__Class** type_info = &type_info_ref;
        inline app::CameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::CameraPlugin__Class>(type_info, "", "CameraPlugin");
        }
        inline app::CameraPlugin* create() {
            return il2cpp::create_object<app::CameraPlugin>(get_class());
        }
    } // namespace CameraPlugin
} // namespace app::classes::types
