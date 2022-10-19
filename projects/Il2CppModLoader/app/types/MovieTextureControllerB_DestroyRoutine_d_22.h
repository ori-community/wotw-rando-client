#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovieTextureControllerB_DestroyRoutine_d_22 {
        inline app::MovieTextureControllerB_DestroyRoutine_d_22__Class** type_info = (app::MovieTextureControllerB_DestroyRoutine_d_22__Class**)(modloader::win::memory::resolve_rva(0x0474E368));
        inline app::MovieTextureControllerB_DestroyRoutine_d_22__Class* get_class() {
            return il2cpp::get_nested_class<app::MovieTextureControllerB_DestroyRoutine_d_22__Class>(type_info, "", "MovieTextureControllerB", "<DestroyRoutine>d__22");
        }
        inline app::MovieTextureControllerB_DestroyRoutine_d_22* create() {
            return il2cpp::create_object<app::MovieTextureControllerB_DestroyRoutine_d_22>(get_class());
        }
    } // namespace MovieTextureControllerB_DestroyRoutine_d_22
} // namespace app::classes::types
