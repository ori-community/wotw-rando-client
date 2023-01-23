#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Paper {
        namespace {
            inline app::CameraFilterPack_Drawing_Paper__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Drawing_Paper__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_Paper__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Paper__Class>(type_info, "", "CameraFilterPack_Drawing_Paper");
        }
        inline app::CameraFilterPack_Drawing_Paper* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Paper>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Paper
} // namespace app::classes::types
