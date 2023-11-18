#pragma once
#include <Modloader/app/structs/JumpShootSharkSettings.h>
#include <Modloader/app/structs/JumpShootSharkSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkSettings {
        inline app::JumpShootSharkSettings__Class** type_info() {
            static app::JumpShootSharkSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkSettings__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkSettings__Class>(type_info(), "", "JumpShootSharkSettings");
        }
        inline app::JumpShootSharkSettings* create() {
            return il2cpp::create_object<app::JumpShootSharkSettings>(get_class());
        }
    } // namespace JumpShootSharkSettings
} // namespace app::classes::types
