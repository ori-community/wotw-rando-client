#pragma once
#include <Modloader/app/structs/CameraFilterPack_OldFilm_Cutting1.h>
#include <Modloader/app/structs/CameraFilterPack_OldFilm_Cutting1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_OldFilm_Cutting1 {
        inline app::CameraFilterPack_OldFilm_Cutting1__Class** type_info() {
            static app::CameraFilterPack_OldFilm_Cutting1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_OldFilm_Cutting1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_OldFilm_Cutting1__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_OldFilm_Cutting1__Class>(type_info(), "", "CameraFilterPack_OldFilm_Cutting1");
        }
        inline app::CameraFilterPack_OldFilm_Cutting1* create() {
            return il2cpp::create_object<app::CameraFilterPack_OldFilm_Cutting1>(get_class());
        }
    } // namespace CameraFilterPack_OldFilm_Cutting1
} // namespace app::classes::types
