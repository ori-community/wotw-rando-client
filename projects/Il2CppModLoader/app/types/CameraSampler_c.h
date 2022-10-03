#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSampler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSampler_c__Class** type_info;
        inline app::CameraSampler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSampler_c__Class>(type_info, "Moon.ArtOptimization", "CameraSampler", "<>c");
        }
        inline app::CameraSampler_c* create() {
            return il2cpp::create_object<app::CameraSampler_c>(get_class());
        }
    } // namespace CameraSampler_c
} // namespace app::classes::types
