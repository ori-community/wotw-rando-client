#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blizzard__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blizzard.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blizzard {
        namespace {
            inline app::CameraFilterPack_Blizzard__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Blizzard__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Blizzard__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blizzard__Class>(type_info, "", "CameraFilterPack_Blizzard");
        }
        inline app::CameraFilterPack_Blizzard* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blizzard>(get_class());
        }
    } // namespace CameraFilterPack_Blizzard
} // namespace app::classes::types
