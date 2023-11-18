#pragma once
#include <Modloader/app/structs/SpellUIShardListOverlay.h>
#include <Modloader/app/structs/SpellUIShardListOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardListOverlay {
        inline app::SpellUIShardListOverlay__Class** type_info() {
            static app::SpellUIShardListOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIShardListOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIShardListOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardListOverlay__Class>(type_info(), "", "SpellUIShardListOverlay");
        }
        inline app::SpellUIShardListOverlay* create() {
            return il2cpp::create_object<app::SpellUIShardListOverlay>(get_class());
        }
    } // namespace SpellUIShardListOverlay
} // namespace app::classes::types
