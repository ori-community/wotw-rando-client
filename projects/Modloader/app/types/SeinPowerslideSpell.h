#pragma once
#include <Modloader/app/structs/SeinPowerslideSpell.h>
#include <Modloader/app/structs/SeinPowerslideSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell {
        inline app::SeinPowerslideSpell__Class** type_info() {
            static app::SeinPowerslideSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPowerslideSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPowerslideSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerslideSpell__Class>(type_info(), "", "SeinPowerslideSpell");
        }
        inline app::SeinPowerslideSpell* create() {
            return il2cpp::create_object<app::SeinPowerslideSpell>(get_class());
        }
    } // namespace SeinPowerslideSpell
} // namespace app::classes::types
