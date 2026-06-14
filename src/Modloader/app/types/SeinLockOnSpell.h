#pragma once
#include <Modloader/app/structs/SeinLockOnSpell.h>
#include <Modloader/app/structs/SeinLockOnSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLockOnSpell {
        inline app::SeinLockOnSpell__Class** type_info() {
            static app::SeinLockOnSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLockOnSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLockOnSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLockOnSpell__Class>(type_info(), "", "SeinLockOnSpell");
        }
        inline app::SeinLockOnSpell* create() {
            return il2cpp::create_object<app::SeinLockOnSpell>(get_class());
        }
    } // namespace SeinLockOnSpell
} // namespace app::classes::types
