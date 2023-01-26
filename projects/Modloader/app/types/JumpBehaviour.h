#pragma once
#include <Modloader/app/structs/JumpBehaviour.h>
#include <Modloader/app/structs/JumpBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpBehaviour {
        inline app::JumpBehaviour__Class** type_info() {
            static app::JumpBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::JumpBehaviour__Class>(type_info(), "", "JumpBehaviour");
        }
        inline app::JumpBehaviour* create() {
            return il2cpp::create_object<app::JumpBehaviour>(get_class());
        }
    } // namespace JumpBehaviour
} // namespace app::classes::types
