#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInputRebinding_PlayerInputKey__Array {
        namespace {
            inline app::PlayerInputRebinding_PlayerInputKey__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerInputRebinding_PlayerInputKey__Array__Class** type_info = &type_info_ref;
        inline app::PlayerInputRebinding_PlayerInputKey__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputRebinding_PlayerInputKey__Array__Class>(type_info, "", "PlayerInputRebinding+PlayerInputKey[]");
        }
        inline app::PlayerInputRebinding_PlayerInputKey__Array* create() {
            return il2cpp::create_object<app::PlayerInputRebinding_PlayerInputKey__Array>(get_class());
        }
    } // namespace PlayerInputRebinding_PlayerInputKey__Array
} // namespace app::classes::types
