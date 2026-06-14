#pragma once
#include <Modloader/app/structs/JumpShootSharkZone.h>
#include <Modloader/app/structs/JumpShootSharkZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkZone {
        inline app::JumpShootSharkZone__Class** type_info() {
            static app::JumpShootSharkZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShootSharkZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShootSharkZone__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkZone__Class>(type_info(), "", "JumpShootSharkZone");
        }
        inline app::JumpShootSharkZone* create() {
            return il2cpp::create_object<app::JumpShootSharkZone>(get_class());
        }
    } // namespace JumpShootSharkZone
} // namespace app::classes::types
