#pragma once
#include <Modloader/app/structs/SurfaceToWwiseSwitchData.h>
#include <Modloader/app/structs/SurfaceToWwiseSwitchData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceToWwiseSwitchData {
        inline app::SurfaceToWwiseSwitchData__Class** type_info() {
            static app::SurfaceToWwiseSwitchData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceToWwiseSwitchData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceToWwiseSwitchData__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToWwiseSwitchData__Class>(type_info(), "", "SurfaceToWwiseSwitchData");
        }
        inline app::SurfaceToWwiseSwitchData* create() {
            return il2cpp::create_object<app::SurfaceToWwiseSwitchData>(get_class());
        }
    } // namespace SurfaceToWwiseSwitchData
} // namespace app::classes::types
