#pragma once
#include <Modloader/app/structs/PlayerUberStateGeneral_c.h>
#include <Modloader/app/structs/PlayerUberStateGeneral_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGeneral_c {
        inline app::PlayerUberStateGeneral_c__Class** type_info() {
            static app::PlayerUberStateGeneral_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateGeneral_c__Class**)(modloader::win::memory::resolve_rva(0x0476E7C8));
            }
            return cache;
        }
        inline app::PlayerUberStateGeneral_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateGeneral_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateGeneral", "<>c");
        }
        inline app::PlayerUberStateGeneral_c* create() {
            return il2cpp::create_object<app::PlayerUberStateGeneral_c>(get_class());
        }
    } // namespace PlayerUberStateGeneral_c
} // namespace app::classes::types
