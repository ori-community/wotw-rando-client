#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovieTextureControllerB {
        namespace {
            inline app::MovieTextureControllerB__Class* type_info_ref = nullptr;
        }
        inline app::MovieTextureControllerB__Class** type_info = &type_info_ref;
        inline app::MovieTextureControllerB__Class* get_class() {
            return il2cpp::get_class<app::MovieTextureControllerB__Class>(type_info, "", "MovieTextureControllerB");
        }
        inline app::MovieTextureControllerB* create() {
            return il2cpp::create_object<app::MovieTextureControllerB>(get_class());
        }
    } // namespace MovieTextureControllerB
} // namespace app::classes::types
