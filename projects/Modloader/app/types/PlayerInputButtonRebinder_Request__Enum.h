#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerInputButtonRebinder_Request__Enum__Class.h>
#include <Modloader/app/structs/PlayerInputButtonRebinder_Request__Enum.h>

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
