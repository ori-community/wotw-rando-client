#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInputButtonRebinder_Request__Enum {
        namespace {
            inline app::PlayerInputButtonRebinder_Request__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerInputButtonRebinder_Request__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerInputButtonRebinder_Request__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputButtonRebinder_Request__Enum__Class>(type_info, "", "PlayerInputButtonRebinder", "Request");
        }
        inline app::PlayerInputButtonRebinder_Request__Enum* create() {
            return il2cpp::create_object<app::PlayerInputButtonRebinder_Request__Enum>(get_class());
        }
    } // namespace PlayerInputButtonRebinder_Request__Enum
} // namespace app::classes::types
