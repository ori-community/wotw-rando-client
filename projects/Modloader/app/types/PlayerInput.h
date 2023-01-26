#pragma once
#include <Modloader/app/structs/PlayerInput.h>
#include <Modloader/app/structs/PlayerInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInput {
        inline app::PlayerInput__Class** type_info() {
            static app::PlayerInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerInput__Class**)(modloader::win::memory::resolve_rva(0x04750E20));
            }
            return cache;
        }
        inline app::PlayerInput__Class* get_class() {
            return il2cpp::get_class<app::PlayerInput__Class>(type_info(), "", "PlayerInput");
        }
        inline app::PlayerInput* create() {
            return il2cpp::create_object<app::PlayerInput>(get_class());
        }
    } // namespace PlayerInput
} // namespace app::classes::types
