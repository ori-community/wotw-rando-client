#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyCodeButtonInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyCodeButtonInput__Class** type_info;
        inline app::KeyCodeButtonInput__Class* get_class() {
            return il2cpp::get_class<app::KeyCodeButtonInput__Class>(type_info, "SmartInput", "KeyCodeButtonInput");
        }
        inline app::KeyCodeButtonInput* create() {
            return il2cpp::create_object<app::KeyCodeButtonInput>(get_class());
        }
        inline app::KeyCodeButtonInput__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyCodeButtonInput__Array>(get_class(), size);
        }
    } // namespace KeyCodeButtonInput
} // namespace app::classes::types
