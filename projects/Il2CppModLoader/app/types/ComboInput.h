#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComboInput__Class** type_info;
        inline app::ComboInput__Class* get_class() {
            return il2cpp::get_class<app::ComboInput__Class>(type_info, "Moon.ComboSystem", "ComboInput");
        }
        inline app::ComboInput* create() {
            return il2cpp::create_object<app::ComboInput>(get_class());
        }
        inline app::ComboInput__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboInput__Array>(get_class(), size);
        }
    } // namespace ComboInput
} // namespace app::classes::types
