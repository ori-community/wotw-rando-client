#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerInput__Class.h>
#include <Modloader/app/structs/PlayerInput.h>

namespace app::classes::types {
    namespace PlayerInput {
        inline app::PlayerInput__Class** type_info = (app::PlayerInput__Class**)(modloader::win::memory::resolve_rva(0x04750E20));
        inline app::PlayerInput__Class* get_class() {
            return il2cpp::get_class<app::PlayerInput__Class>(type_info, "", "PlayerInput");
        }
        inline app::PlayerInput* create() {
            return il2cpp::create_object<app::PlayerInput>(get_class());
        }
    } // namespace PlayerInput
} // namespace app::classes::types
