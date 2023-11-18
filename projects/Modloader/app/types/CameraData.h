#pragma once
#include <Modloader/app/structs/CameraData.h>
#include <Modloader/app/structs/CameraData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraData {
        inline app::CameraData__Class** type_info() {
            static app::CameraData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraData__Class**)(modloader::win::memory::resolve_rva(0x0478E0B8));
            }
            return cache;
        }
        inline app::CameraData__Class* get_class() {
            return il2cpp::get_class<app::CameraData__Class>(type_info(), "", "CameraData");
        }
        inline app::CameraData* create() {
            return il2cpp::create_object<app::CameraData>(get_class());
        }
    } // namespace CameraData
} // namespace app::classes::types
