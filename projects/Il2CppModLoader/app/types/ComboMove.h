#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboMove {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComboMove__Class** type_info;
        inline app::ComboMove__Class* get_class() {
            return il2cpp::get_class<app::ComboMove__Class>(type_info, "Moon.ComboSystem", "ComboMove");
        }
        inline app::ComboMove* create() {
            return il2cpp::create_object<app::ComboMove>(get_class());
        }
        inline app::ComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboMove__Array>(get_class(), size);
        }
    } // namespace ComboMove
} // namespace app::classes::types
