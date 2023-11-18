#pragma once
#include <Modloader/app/structs/PlayerUberStateGeneral.h>
#include <Modloader/app/structs/PlayerUberStateGeneral__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGeneral {
        inline app::PlayerUberStateGeneral__Class** type_info() {
            static app::PlayerUberStateGeneral__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateGeneral__Class**)(modloader::win::memory::resolve_rva(0x04771CE0));
            }
            return cache;
        }
        inline app::PlayerUberStateGeneral__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGeneral__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateGeneral");
        }
        inline app::PlayerUberStateGeneral* create() {
            return il2cpp::create_object<app::PlayerUberStateGeneral>(get_class());
        }
    } // namespace PlayerUberStateGeneral
} // namespace app::classes::types
