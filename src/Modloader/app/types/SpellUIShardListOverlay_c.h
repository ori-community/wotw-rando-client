#pragma once
#include <Modloader/app/structs/SpellUIShardListOverlay_c.h>
#include <Modloader/app/structs/SpellUIShardListOverlay_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardListOverlay_c {
        inline app::SpellUIShardListOverlay_c__Class** type_info() {
            static app::SpellUIShardListOverlay_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellUIShardListOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04791620));
            }
            return cache;
        }
        inline app::SpellUIShardListOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIShardListOverlay_c__Class>(type_info(), "", "SpellUIShardListOverlay", "<>c");
        }
        inline app::SpellUIShardListOverlay_c* create() {
            return il2cpp::create_object<app::SpellUIShardListOverlay_c>(get_class());
        }
    } // namespace SpellUIShardListOverlay_c
} // namespace app::classes::types
