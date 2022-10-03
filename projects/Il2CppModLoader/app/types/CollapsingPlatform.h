#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollapsingPlatform__Class** type_info;
        inline app::CollapsingPlatform__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatform__Class>(type_info, "", "CollapsingPlatform");
        }
        inline app::CollapsingPlatform* create() {
            return il2cpp::create_object<app::CollapsingPlatform>(get_class());
        }
        inline app::CollapsingPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::CollapsingPlatform__Array>(get_class(), size);
        }
    } // namespace CollapsingPlatform
} // namespace app::classes::types
