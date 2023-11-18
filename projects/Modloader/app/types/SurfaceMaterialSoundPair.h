#pragma once
#include <Modloader/app/structs/SurfaceMaterialSoundPair.h>
#include <Modloader/app/structs/SurfaceMaterialSoundPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialSoundPair {
        inline app::SurfaceMaterialSoundPair__Class** type_info() {
            static app::SurfaceMaterialSoundPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceMaterialSoundPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceMaterialSoundPair__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialSoundPair__Class>(type_info(), "", "SurfaceMaterialSoundPair");
        }
        inline app::SurfaceMaterialSoundPair* create() {
            return il2cpp::create_object<app::SurfaceMaterialSoundPair>(get_class());
        }
    } // namespace SurfaceMaterialSoundPair
} // namespace app::classes::types
