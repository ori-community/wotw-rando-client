#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovieTextureControllerB {
        namespace {
            app::MovieTextureControllerB__Class* type_info_ref = nullptr;
        }
        app::MovieTextureControllerB__Class** type_info = &type_info_ref;
        inline app::MovieTextureControllerB__Class* get_class() {
            return il2cpp::get_class<app::MovieTextureControllerB__Class>(type_info, "", "MovieTextureControllerB");
        }
        inline app::MovieTextureControllerB* create() {
            return il2cpp::create_object<app::MovieTextureControllerB>(get_class());
        }
    } // namespace MovieTextureControllerB
} // namespace app::classes::types
