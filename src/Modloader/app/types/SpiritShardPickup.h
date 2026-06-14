#pragma once
#include <Modloader/app/structs/SpiritShardPickup.h>
#include <Modloader/app/structs/SpiritShardPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardPickup {
        inline app::SpiritShardPickup__Class** type_info() {
            static app::SpiritShardPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardPickup__Class**)(modloader::win::memory::resolve_rva(0x047063F0));
            }
            return cache;
        }
        inline app::SpiritShardPickup__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickup__Class>(type_info(), "", "SpiritShardPickup");
        }
        inline app::SpiritShardPickup* create() {
            return il2cpp::create_object<app::SpiritShardPickup>(get_class());
        }
    } // namespace SpiritShardPickup
} // namespace app::classes::types
