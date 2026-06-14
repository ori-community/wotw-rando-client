#pragma once
#include <Modloader/app/structs/JumpShootSharkPlaceholder.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Array.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder {
        inline app::JumpShootSharkPlaceholder__Class** type_info() {
            static app::JumpShootSharkPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkPlaceholder__Class>(type_info(), "", "JumpShootSharkPlaceholder");
        }
        inline app::JumpShootSharkPlaceholder* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder>(get_class());
        }
        inline app::JumpShootSharkPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::JumpShootSharkPlaceholder__Array>(get_class(), size);
        }
        inline app::JumpShootSharkPlaceholder__Array* create_array(const std::vector<app::JumpShootSharkPlaceholder*>& items) {
            return il2cpp::array_new<app::JumpShootSharkPlaceholder__Array>(get_class(), items);
        }
    } // namespace JumpShootSharkPlaceholder
} // namespace app::classes::types
