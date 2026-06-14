#pragma once
#include <Modloader/app/structs/PlayerUberStateStats.h>
#include <Modloader/app/structs/PlayerUberStateStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateStats {
        inline app::PlayerUberStateStats__Class** type_info() {
            static app::PlayerUberStateStats__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateStats__Class**)(modloader::win::memory::resolve_rva(0x04766978));
            }
            return cache;
        }
        inline app::PlayerUberStateStats__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateStats__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateStats");
        }
        inline app::PlayerUberStateStats* create() {
            return il2cpp::create_object<app::PlayerUberStateStats>(get_class());
        }
    } // namespace PlayerUberStateStats
} // namespace app::classes::types
