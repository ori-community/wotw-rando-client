#pragma once
#include <Modloader/app/structs/MovieTextureController.h>
#include <Modloader/app/structs/MovieTextureController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovieTextureController {
        inline app::MovieTextureController__Class** type_info() {
            static app::MovieTextureController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovieTextureController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovieTextureController__Class* get_class() {
            return il2cpp::get_class<app::MovieTextureController__Class>(type_info(), "", "MovieTextureController");
        }
        inline app::MovieTextureController* create() {
            return il2cpp::create_object<app::MovieTextureController>(get_class());
        }
    } // namespace MovieTextureController
} // namespace app::classes::types
