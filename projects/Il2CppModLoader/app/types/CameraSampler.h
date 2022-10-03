#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSampler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSampler__Class** type_info;
        inline app::CameraSampler__Class* get_class() {
            return il2cpp::get_class<app::CameraSampler__Class>(type_info, "Moon.ArtOptimization", "CameraSampler");
        }
        inline app::CameraSampler* create() {
            return il2cpp::create_object<app::CameraSampler>(get_class());
        }
    } // namespace CameraSampler
} // namespace app::classes::types
