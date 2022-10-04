#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateable_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUpdateable_1__Class** type_info;
        inline app::IUpdateable_1__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable_1__Class>(type_info, "Moon.FSM", "IUpdateable");
        }
        inline app::IUpdateable_1* create() {
            return il2cpp::create_object<app::IUpdateable_1>(get_class());
        }
    } // namespace IUpdateable_1
} // namespace app::classes::types
