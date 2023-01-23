#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterJoint__Class.h>
#include <Modloader/app/structs/CharacterJoint.h>

namespace app::classes::types {
    namespace CharacterJoint {
        namespace {
            inline app::CharacterJoint__Class* type_info_ref = nullptr;
        }
        inline app::CharacterJoint__Class** type_info = &type_info_ref;
        inline app::CharacterJoint__Class* get_class() {
            return il2cpp::get_class<app::CharacterJoint__Class>(type_info, "UnityEngine", "CharacterJoint");
        }
        inline app::CharacterJoint* create() {
            return il2cpp::create_object<app::CharacterJoint>(get_class());
        }
    } // namespace CharacterJoint
} // namespace app::classes::types
