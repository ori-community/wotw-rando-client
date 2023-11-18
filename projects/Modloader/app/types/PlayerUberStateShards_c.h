#pragma once
#include <Modloader/app/structs/PlayerUberStateShards_c.h>
#include <Modloader/app/structs/PlayerUberStateShards_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_c {
        inline app::PlayerUberStateShards_c__Class** type_info() {
            static app::PlayerUberStateShards_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateShards_c__Class**)(modloader::win::memory::resolve_rva(0x047368C8));
            }
            return cache;
        }
        inline app::PlayerUberStateShards_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateShards_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateShards", "<>c");
        }
        inline app::PlayerUberStateShards_c* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_c>(get_class());
        }
    } // namespace PlayerUberStateShards_c
} // namespace app::classes::types
