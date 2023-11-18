#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenHV.h>
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenHV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenHV {
        inline app::CameraFilterPack_TV_WideScreenHV__Class** type_info() {
            static app::CameraFilterPack_TV_WideScreenHV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_WideScreenHV__Class**)(modloader::win::memory::resolve_rva(0x047136B8));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_WideScreenHV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenHV__Class>(type_info(), "", "CameraFilterPack_TV_WideScreenHV");
        }
        inline app::CameraFilterPack_TV_WideScreenHV* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenHV>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenHV
} // namespace app::classes::types
