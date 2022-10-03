#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceToSoundProviderMap {
        namespace {
            app::SurfaceToSoundProviderMap__Class* type_info_ref = nullptr;
        }
        app::SurfaceToSoundProviderMap__Class** type_info = &type_info_ref;
        inline app::SurfaceToSoundProviderMap__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToSoundProviderMap__Class>(type_info, "", "SurfaceToSoundProviderMap");
        }
        inline app::SurfaceToSoundProviderMap* create() {
            return il2cpp::create_object<app::SurfaceToSoundProviderMap>(get_class());
        }
    } // namespace SurfaceToSoundProviderMap
} // namespace app::classes::types
