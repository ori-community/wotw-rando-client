#pragma once
#include <Modloader/app/structs/MovieTextureControllerB.h>
#include <Modloader/app/structs/MovieTextureControllerB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovieTextureControllerB {
        inline app::MovieTextureControllerB__Class** type_info() {
            static app::MovieTextureControllerB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovieTextureControllerB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovieTextureControllerB__Class* get_class() {
            return il2cpp::get_class<app::MovieTextureControllerB__Class>(type_info(), "", "MovieTextureControllerB");
        }
        inline app::MovieTextureControllerB* create() {
            return il2cpp::create_object<app::MovieTextureControllerB>(get_class());
        }
    } // namespace MovieTextureControllerB
} // namespace app::classes::types
