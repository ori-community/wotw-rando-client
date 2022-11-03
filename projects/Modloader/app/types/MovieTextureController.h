#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovieTextureController {
        namespace {
            inline app::MovieTextureController__Class* type_info_ref = nullptr;
        }
        inline app::MovieTextureController__Class** type_info = &type_info_ref;
        inline app::MovieTextureController__Class* get_class() {
            return il2cpp::get_class<app::MovieTextureController__Class>(type_info, "", "MovieTextureController");
        }
        inline app::MovieTextureController* create() {
            return il2cpp::create_object<app::MovieTextureController>(get_class());
        }
    } // namespace MovieTextureController
} // namespace app::classes::types
