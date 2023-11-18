#pragma once
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceToSoundProviderMap {
        inline app::SurfaceToSoundProviderMap__Class** type_info() {
            static app::SurfaceToSoundProviderMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceToSoundProviderMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceToSoundProviderMap__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToSoundProviderMap__Class>(type_info(), "", "SurfaceToSoundProviderMap");
        }
        inline app::SurfaceToSoundProviderMap* create() {
            return il2cpp::create_object<app::SurfaceToSoundProviderMap>(get_class());
        }
    } // namespace SurfaceToSoundProviderMap
} // namespace app::classes::types
