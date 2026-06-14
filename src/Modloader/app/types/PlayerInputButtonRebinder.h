#pragma once
#include <Modloader/app/structs/PlayerInputButtonRebinder.h>
#include <Modloader/app/structs/PlayerInputButtonRebinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInputButtonRebinder {
        inline app::PlayerInputButtonRebinder__Class** type_info() {
            static app::PlayerInputButtonRebinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerInputButtonRebinder__Class**)(modloader::win::memory::resolve_rva(0x04705C80));
            }
            return cache;
        }
        inline app::PlayerInputButtonRebinder__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputButtonRebinder__Class>(type_info(), "", "PlayerInputButtonRebinder");
        }
        inline app::PlayerInputButtonRebinder* create() {
            return il2cpp::create_object<app::PlayerInputButtonRebinder>(get_class());
        }
    } // namespace PlayerInputButtonRebinder
} // namespace app::classes::types
