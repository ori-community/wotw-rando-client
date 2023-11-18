#pragma once
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Array.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder__Array {
        inline app::JumpShootSharkPlaceholder__Array__Class** type_info() {
            static app::JumpShootSharkPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkPlaceholder__Array__Class>(type_info(), "", "JumpShootSharkPlaceholder[]");
        }
        inline app::JumpShootSharkPlaceholder__Array* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder__Array>(get_class());
        }
    } // namespace JumpShootSharkPlaceholder__Array
} // namespace app::classes::types
