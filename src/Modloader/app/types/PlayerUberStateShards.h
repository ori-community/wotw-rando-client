#pragma once
#include <Modloader/app/structs/PlayerUberStateShards.h>
#include <Modloader/app/structs/PlayerUberStateShards__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards {
        inline app::PlayerUberStateShards__Class** type_info() {
            static app::PlayerUberStateShards__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateShards__Class**)(modloader::win::memory::resolve_rva(0x047474A8));
            }
            return cache;
        }
        inline app::PlayerUberStateShards__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateShards__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateShards");
        }
        inline app::PlayerUberStateShards* create() {
            return il2cpp::create_object<app::PlayerUberStateShards>(get_class());
        }
    } // namespace PlayerUberStateShards
} // namespace app::classes::types
