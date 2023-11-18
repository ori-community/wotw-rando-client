#pragma once
#include <Modloader/app/structs/JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings {
        inline app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class** type_info() {
            static app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class>(type_info(), "", "JumpShootSharkPlaceholder", "JumpShootSharkPlaceholderSettings");
        }
        inline app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings>(get_class());
        }
    } // namespace JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings
} // namespace app::classes::types
