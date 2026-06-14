#pragma once
#include <Modloader/app/structs/PlayerSpiritShards.h>
#include <Modloader/app/structs/PlayerSpiritShards__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerSpiritShards {
        inline app::PlayerSpiritShards__Class** type_info() {
            static app::PlayerSpiritShards__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerSpiritShards__Class**)(modloader::win::memory::resolve_rva(0x04782188));
            }
            return cache;
        }
        inline app::PlayerSpiritShards__Class* get_class() {
            return il2cpp::get_class<app::PlayerSpiritShards__Class>(type_info(), "", "PlayerSpiritShards");
        }
        inline app::PlayerSpiritShards* create() {
            return il2cpp::create_object<app::PlayerSpiritShards>(get_class());
        }
    } // namespace PlayerSpiritShards
} // namespace app::classes::types
