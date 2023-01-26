#pragma once
#include <Modloader/app/structs/SeinShieldSpell.h>
#include <Modloader/app/structs/SeinShieldSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinShieldSpell {
        inline app::SeinShieldSpell__Class** type_info() {
            static app::SeinShieldSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinShieldSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinShieldSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinShieldSpell__Class>(type_info(), "", "SeinShieldSpell");
        }
        inline app::SeinShieldSpell* create() {
            return il2cpp::create_object<app::SeinShieldSpell>(get_class());
        }
    } // namespace SeinShieldSpell
} // namespace app::classes::types
