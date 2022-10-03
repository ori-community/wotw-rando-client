#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Music_Layer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Music_Layer__Class** type_info;
        inline app::Music_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::Music_Layer__Class>(type_info, "Core", "Music", "Layer");
        }
        inline app::Music_Layer* create() {
            return il2cpp::create_object<app::Music_Layer>(get_class());
        }
        inline app::Music_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::Music_Layer__Array>(get_class(), size);
        }
    } // namespace Music_Layer
} // namespace app::classes::types
