#pragma once
#include <Modloader/app/structs/JumpShootSharkAction.h>
#include <Modloader/app/structs/JumpShootSharkAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkAction {
        inline app::JumpShootSharkAction__Class** type_info() {
            static app::JumpShootSharkAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkAction__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkAction__Class>(type_info(), "", "JumpShootSharkAction");
        }
        inline app::JumpShootSharkAction* create() {
            return il2cpp::create_object<app::JumpShootSharkAction>(get_class());
        }
    } // namespace JumpShootSharkAction
} // namespace app::classes::types
