#pragma once
#include <Modloader/app/structs/FPSCharacter.h>
#include <Modloader/app/structs/FPSCharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSCharacter {
        inline app::FPSCharacter__Class** type_info() {
            static app::FPSCharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSCharacter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSCharacter__Class* get_class() {
            return il2cpp::get_class<app::FPSCharacter__Class>(type_info(), "RootMotion.Demos", "FPSCharacter");
        }
        inline app::FPSCharacter* create() {
            return il2cpp::create_object<app::FPSCharacter>(get_class());
        }
    } // namespace FPSCharacter
} // namespace app::classes::types
