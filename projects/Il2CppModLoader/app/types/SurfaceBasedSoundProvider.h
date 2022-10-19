#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceBasedSoundProvider {
        namespace {
            inline app::SurfaceBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::SurfaceBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedSoundProvider__Class>(type_info, "", "SurfaceBasedSoundProvider");
        }
        inline app::SurfaceBasedSoundProvider* create() {
            return il2cpp::create_object<app::SurfaceBasedSoundProvider>(get_class());
        }
    } // namespace SurfaceBasedSoundProvider
} // namespace app::classes::types
