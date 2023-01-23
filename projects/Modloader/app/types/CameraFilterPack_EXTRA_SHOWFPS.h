#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS__Class.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_SHOWFPS {
        inline app::CameraFilterPack_EXTRA_SHOWFPS__Class** type_info = (app::CameraFilterPack_EXTRA_SHOWFPS__Class**)(modloader::win::memory::resolve_rva(0x04730A10));
        inline app::CameraFilterPack_EXTRA_SHOWFPS__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EXTRA_SHOWFPS__Class>(type_info, "", "CameraFilterPack_EXTRA_SHOWFPS");
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_SHOWFPS>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_SHOWFPS
} // namespace app::classes::types
