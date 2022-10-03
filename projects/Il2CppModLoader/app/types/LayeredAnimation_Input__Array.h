#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation_Input__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayeredAnimation_Input__Array__Class** type_info;
        inline app::LayeredAnimation_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::LayeredAnimation_Input__Array__Class>(type_info, "Moon", "LayeredAnimation+Input[]");
        }
        inline app::LayeredAnimation_Input__Array* create() {
            return il2cpp::create_object<app::LayeredAnimation_Input__Array>(get_class());
        }
    } // namespace LayeredAnimation_Input__Array
} // namespace app::classes::types
