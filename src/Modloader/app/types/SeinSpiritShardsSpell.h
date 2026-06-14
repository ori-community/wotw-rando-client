#pragma once
#include <Modloader/app/structs/SeinSpiritShardsSpell.h>
#include <Modloader/app/structs/SeinSpiritShardsSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritShardsSpell {
        inline app::SeinSpiritShardsSpell__Class** type_info() {
            static app::SeinSpiritShardsSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritShardsSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritShardsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritShardsSpell__Class>(type_info(), "", "SeinSpiritShardsSpell");
        }
        inline app::SeinSpiritShardsSpell* create() {
            return il2cpp::create_object<app::SeinSpiritShardsSpell>(get_class());
        }
    } // namespace SeinSpiritShardsSpell
} // namespace app::classes::types
