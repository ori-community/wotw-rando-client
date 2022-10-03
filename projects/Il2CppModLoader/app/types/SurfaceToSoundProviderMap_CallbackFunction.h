#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceToSoundProviderMap_CallbackFunction {
        namespace {
            app::SurfaceToSoundProviderMap_CallbackFunction__Class* type_info_ref = nullptr;
        }
        app::SurfaceToSoundProviderMap_CallbackFunction__Class** type_info = &type_info_ref;
        inline app::SurfaceToSoundProviderMap_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::SurfaceToSoundProviderMap_CallbackFunction__Class>(type_info, "", "SurfaceToSoundProviderMap", "CallbackFunction");
        }
        inline app::SurfaceToSoundProviderMap_CallbackFunction* create() {
            return il2cpp::create_object<app::SurfaceToSoundProviderMap_CallbackFunction>(get_class());
        }
    } // namespace SurfaceToSoundProviderMap_CallbackFunction
} // namespace app::classes::types
