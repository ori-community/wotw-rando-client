#pragma once
#include <Modloader/app/structs/PlayerInputRebinding.h>
#include <Modloader/app/structs/PlayerInputRebinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInputRebinding {
        inline app::PlayerInputRebinding__Class** type_info() {
            static app::PlayerInputRebinding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerInputRebinding__Class**)(modloader::win::memory::resolve_rva(0x04710308));
            }
            return cache;
        }
        inline app::PlayerInputRebinding__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputRebinding__Class>(type_info(), "", "PlayerInputRebinding");
        }
        inline app::PlayerInputRebinding* create() {
            return il2cpp::create_object<app::PlayerInputRebinding>(get_class());
        }
    } // namespace PlayerInputRebinding
} // namespace app::classes::types
