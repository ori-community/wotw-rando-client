#pragma once
#include <Modloader/app/structs/SeinStickyMineSpell.h>
#include <Modloader/app/structs/SeinStickyMineSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStickyMineSpell {
        inline app::SeinStickyMineSpell__Class** type_info() {
            static app::SeinStickyMineSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinStickyMineSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinStickyMineSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinStickyMineSpell__Class>(type_info(), "", "SeinStickyMineSpell");
        }
        inline app::SeinStickyMineSpell* create() {
            return il2cpp::create_object<app::SeinStickyMineSpell>(get_class());
        }
    } // namespace SeinStickyMineSpell
} // namespace app::classes::types
