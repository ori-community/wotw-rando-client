#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionPreset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolutionPreset__Class** type_info;
        inline app::ResolutionPreset__Class* get_class() {
            return il2cpp::get_class<app::ResolutionPreset__Class>(type_info, "Moon.ArtOptimization", "ResolutionPreset");
        }
        inline app::ResolutionPreset* create() {
            return il2cpp::create_object<app::ResolutionPreset>(get_class());
        }
        inline app::ResolutionPreset__Array* create_array(int size) {
            return il2cpp::array_new<app::ResolutionPreset__Array>(get_class(), size);
        }
    } // namespace ResolutionPreset
} // namespace app::classes::types
