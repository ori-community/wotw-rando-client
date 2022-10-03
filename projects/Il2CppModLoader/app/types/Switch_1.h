#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Switch_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Switch_1__Class** type_info;
        inline app::Switch_1__Class* get_class() {
            return il2cpp::get_class<app::Switch_1__Class>(type_info, "AK.Wwise", "Switch");
        }
        inline app::Switch_1* create() {
            return il2cpp::create_object<app::Switch_1>(get_class());
        }
    } // namespace Switch_1
} // namespace app::classes::types
