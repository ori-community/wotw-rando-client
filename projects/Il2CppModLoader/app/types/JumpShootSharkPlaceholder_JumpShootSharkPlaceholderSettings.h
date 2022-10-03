#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings {
        namespace {
            app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class>(type_info, "", "JumpShootSharkPlaceholder", "JumpShootSharkPlaceholderSettings");
        }
        inline app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings>(get_class());
        }
    } // namespace JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings
} // namespace app::classes::types
