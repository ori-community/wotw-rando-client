#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPoleEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPoleEffects__Class** type_info;
        inline app::SeinPoleEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinPoleEffects__Class>(type_info, "", "SeinPoleEffects");
        }
        inline app::SeinPoleEffects* create() {
            return il2cpp::create_object<app::SeinPoleEffects>(get_class());
        }
    } // namespace SeinPoleEffects
} // namespace app::classes::types
