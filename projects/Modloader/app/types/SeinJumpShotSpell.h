#pragma once
#include <Modloader/app/structs/SeinJumpShotSpell.h>
#include <Modloader/app/structs/SeinJumpShotSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinJumpShotSpell {
        inline app::SeinJumpShotSpell__Class** type_info() {
            static app::SeinJumpShotSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinJumpShotSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinJumpShotSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpShotSpell__Class>(type_info(), "", "SeinJumpShotSpell");
        }
        inline app::SeinJumpShotSpell* create() {
            return il2cpp::create_object<app::SeinJumpShotSpell>(get_class());
        }
    } // namespace SeinJumpShotSpell
} // namespace app::classes::types
