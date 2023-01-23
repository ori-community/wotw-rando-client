#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Real_VHS__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Real_VHS.h>

namespace app::classes::types {
    namespace CameraFilterPack_Real_VHS {
        namespace {
            inline app::CameraFilterPack_Real_VHS__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Real_VHS__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Real_VHS__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Real_VHS__Class>(type_info, "", "CameraFilterPack_Real_VHS");
        }
        inline app::CameraFilterPack_Real_VHS* create() {
            return il2cpp::create_object<app::CameraFilterPack_Real_VHS>(get_class());
        }
    } // namespace CameraFilterPack_Real_VHS
} // namespace app::classes::types
