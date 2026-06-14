#pragma once
#include <Modloader/app/structs/PlayerSpiritShards_c.h>
#include <Modloader/app/structs/PlayerSpiritShards_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerSpiritShards_c {
        inline app::PlayerSpiritShards_c__Class** type_info() {
            static app::PlayerSpiritShards_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerSpiritShards_c__Class**)(modloader::win::memory::resolve_rva(0x0471B5F8));
            }
            return cache;
        }
        inline app::PlayerSpiritShards_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerSpiritShards_c__Class>(type_info(), "", "PlayerSpiritShards", "<>c");
        }
        inline app::PlayerSpiritShards_c* create() {
            return il2cpp::create_object<app::PlayerSpiritShards_c>(get_class());
        }
    } // namespace PlayerSpiritShards_c
} // namespace app::classes::types
