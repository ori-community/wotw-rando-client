#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparencyAnimatorSystemStrategy__Class** type_info;
        inline app::TransparencyAnimatorSystemStrategy__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystemStrategy__Class>(type_info, "Moon.Timeline", "TransparencyAnimatorSystemStrategy");
        }
        inline app::TransparencyAnimatorSystemStrategy* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy>(get_class());
        }
    } // namespace TransparencyAnimatorSystemStrategy
} // namespace app::classes::types
