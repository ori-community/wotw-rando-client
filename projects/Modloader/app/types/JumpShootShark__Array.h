#pragma once
#include <Modloader/app/structs/JumpShootShark__Array.h>
#include <Modloader/app/structs/JumpShootShark__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootShark__Array {
        inline app::JumpShootShark__Array__Class** type_info() {
            static app::JumpShootShark__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootShark__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootShark__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootShark__Array__Class>(type_info(), "", "JumpShootShark[]");
        }
        inline app::JumpShootShark__Array* create() {
            return il2cpp::create_object<app::JumpShootShark__Array>(get_class());
        }
    } // namespace JumpShootShark__Array
} // namespace app::classes::types
