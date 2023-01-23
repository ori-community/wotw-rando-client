#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DarkMatter__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DarkMatter.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_DarkMatter {
        namespace {
            inline app::CameraFilterPack_FX_DarkMatter__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_FX_DarkMatter__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_FX_DarkMatter__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_DarkMatter__Class>(type_info, "", "CameraFilterPack_FX_DarkMatter");
        }
        inline app::CameraFilterPack_FX_DarkMatter* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_DarkMatter>(get_class());
        }
    } // namespace CameraFilterPack_FX_DarkMatter
} // namespace app::classes::types
