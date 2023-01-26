#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenHorizontal.h>
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenHorizontal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenHorizontal {
        inline app::CameraFilterPack_TV_WideScreenHorizontal__Class** type_info() {
            static app::CameraFilterPack_TV_WideScreenHorizontal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_WideScreenHorizontal__Class**)(modloader::win::memory::resolve_rva(0x04794A80));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_WideScreenHorizontal__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenHorizontal__Class>(type_info(), "", "CameraFilterPack_TV_WideScreenHorizontal");
        }
        inline app::CameraFilterPack_TV_WideScreenHorizontal* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenHorizontal>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenHorizontal
} // namespace app::classes::types
