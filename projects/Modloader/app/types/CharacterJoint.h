#pragma once
#include <Modloader/app/structs/CharacterJoint.h>
#include <Modloader/app/structs/CharacterJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterJoint {
        inline app::CharacterJoint__Class** type_info() {
            static app::CharacterJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterJoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterJoint__Class* get_class() {
            return il2cpp::get_class<app::CharacterJoint__Class>(type_info(), "UnityEngine", "CharacterJoint");
        }
        inline app::CharacterJoint* create() {
            return il2cpp::create_object<app::CharacterJoint>(get_class());
        }
    } // namespace CharacterJoint
} // namespace app::classes::types
