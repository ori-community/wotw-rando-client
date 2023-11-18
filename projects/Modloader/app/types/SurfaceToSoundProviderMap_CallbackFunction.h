#pragma once
#include <Modloader/app/structs/SurfaceToSoundProviderMap_CallbackFunction.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap_CallbackFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceToSoundProviderMap_CallbackFunction {
        inline app::SurfaceToSoundProviderMap_CallbackFunction__Class** type_info() {
            static app::SurfaceToSoundProviderMap_CallbackFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceToSoundProviderMap_CallbackFunction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceToSoundProviderMap_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::SurfaceToSoundProviderMap_CallbackFunction__Class>(type_info(), "", "SurfaceToSoundProviderMap", "CallbackFunction");
        }
        inline app::SurfaceToSoundProviderMap_CallbackFunction* create() {
            return il2cpp::create_object<app::SurfaceToSoundProviderMap_CallbackFunction>(get_class());
        }
    } // namespace SurfaceToSoundProviderMap_CallbackFunction
} // namespace app::classes::types
