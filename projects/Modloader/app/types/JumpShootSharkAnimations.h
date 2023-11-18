#pragma once
#include <Modloader/app/structs/JumpShootSharkAnimations.h>
#include <Modloader/app/structs/JumpShootSharkAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkAnimations {
        inline app::JumpShootSharkAnimations__Class** type_info() {
            static app::JumpShootSharkAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkAnimations__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkAnimations__Class>(type_info(), "", "JumpShootSharkAnimations");
        }
        inline app::JumpShootSharkAnimations* create() {
            return il2cpp::create_object<app::JumpShootSharkAnimations>(get_class());
        }
    } // namespace JumpShootSharkAnimations
} // namespace app::classes::types
