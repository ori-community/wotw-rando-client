#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Sample__Class** type_info;
        inline app::Sample__Class* get_class() {
            return il2cpp::get_class<app::Sample__Class>(type_info, "Moon.ArtOptimization", "Sample");
        }
        inline app::Sample* create() {
            return il2cpp::create_object<app::Sample>(get_class());
        }
        inline app::Sample__Array* create_array(int size) {
            return il2cpp::array_new<app::Sample__Array>(get_class(), size);
        }
    } // namespace Sample
} // namespace app::classes::types
