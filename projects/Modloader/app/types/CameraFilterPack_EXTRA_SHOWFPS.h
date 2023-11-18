#pragma once
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_SHOWFPS {
        inline app::CameraFilterPack_EXTRA_SHOWFPS__Class** type_info() {
            static app::CameraFilterPack_EXTRA_SHOWFPS__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_EXTRA_SHOWFPS__Class**)(modloader::win::memory::resolve_rva(0x04730A10));
            }
            return cache;
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EXTRA_SHOWFPS__Class>(type_info(), "", "CameraFilterPack_EXTRA_SHOWFPS");
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_SHOWFPS>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_SHOWFPS
} // namespace app::classes::types
