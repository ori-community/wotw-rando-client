#pragma once
#include <Modloader/app/structs/PlayerInputButtonRebinder_Request__Enum.h>
#include <Modloader/app/structs/PlayerInputButtonRebinder_Request__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInputButtonRebinder_Request__Enum {
        inline app::PlayerInputButtonRebinder_Request__Enum__Class** type_info() {
            static app::PlayerInputButtonRebinder_Request__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInputButtonRebinder_Request__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInputButtonRebinder_Request__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputButtonRebinder_Request__Enum__Class>(type_info(), "", "PlayerInputButtonRebinder", "Request");
        }
        inline app::PlayerInputButtonRebinder_Request__Enum* create() {
            return il2cpp::create_object<app::PlayerInputButtonRebinder_Request__Enum>(get_class());
        }
    } // namespace PlayerInputButtonRebinder_Request__Enum
} // namespace app::classes::types
