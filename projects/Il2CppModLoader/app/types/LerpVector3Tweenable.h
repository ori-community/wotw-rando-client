#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LerpVector3Tweenable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LerpVector3Tweenable__Class** type_info;
        inline app::LerpVector3Tweenable__Class* get_class() {
            return il2cpp::get_class<app::LerpVector3Tweenable__Class>(type_info, "Moon", "LerpVector3Tweenable");
        }
        inline app::LerpVector3Tweenable* create() {
            return il2cpp::create_object<app::LerpVector3Tweenable>(get_class());
        }
    } // namespace LerpVector3Tweenable
} // namespace app::classes::types
