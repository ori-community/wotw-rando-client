#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSCharacter {
        namespace {
            app::FPSCharacter__Class* type_info_ref = nullptr;
        }
        app::FPSCharacter__Class** type_info = &type_info_ref;
        inline app::FPSCharacter__Class* get_class() {
            return il2cpp::get_class<app::FPSCharacter__Class>(type_info, "RootMotion.Demos", "FPSCharacter");
        }
        inline app::FPSCharacter* create() {
            return il2cpp::create_object<app::FPSCharacter>(get_class());
        }
    } // namespace FPSCharacter
} // namespace app::classes::types
