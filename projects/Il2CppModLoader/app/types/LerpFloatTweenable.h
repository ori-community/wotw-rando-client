#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LerpFloatTweenable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LerpFloatTweenable__Class** type_info;
        inline app::LerpFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::LerpFloatTweenable__Class>(type_info, "Moon", "LerpFloatTweenable");
        }
        inline app::LerpFloatTweenable* create() {
            return il2cpp::create_object<app::LerpFloatTweenable>(get_class());
        }
    } // namespace LerpFloatTweenable
} // namespace app::classes::types
