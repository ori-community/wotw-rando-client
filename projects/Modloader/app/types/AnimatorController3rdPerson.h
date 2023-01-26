#pragma once
#include <Modloader/app/structs/AnimatorController3rdPerson.h>
#include <Modloader/app/structs/AnimatorController3rdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorController3rdPerson {
        inline app::AnimatorController3rdPerson__Class** type_info() {
            static app::AnimatorController3rdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorController3rdPerson__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorController3rdPerson__Class* get_class() {
            return il2cpp::get_class<app::AnimatorController3rdPerson__Class>(type_info(), "RootMotion.Demos", "AnimatorController3rdPerson");
        }
        inline app::AnimatorController3rdPerson* create() {
            return il2cpp::create_object<app::AnimatorController3rdPerson>(get_class());
        }
    } // namespace AnimatorController3rdPerson
} // namespace app::classes::types
