#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder {
        namespace {
            inline app::JumpShootSharkPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkPlaceholder__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkPlaceholder__Class>(type_info, "", "JumpShootSharkPlaceholder");
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
