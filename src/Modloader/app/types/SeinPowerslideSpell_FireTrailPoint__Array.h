#pragma once
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint__Array.h>
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell_FireTrailPoint__Array {
        inline app::SeinPowerslideSpell_FireTrailPoint__Array__Class** type_info() {
            static app::SeinPowerslideSpell_FireTrailPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPowerslideSpell_FireTrailPoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerslideSpell_FireTrailPoint__Array__Class>(type_info(), "", "SeinPowerslideSpell+FireTrailPoint[]");
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array* create() {
            return il2cpp::create_object<app::SeinPowerslideSpell_FireTrailPoint__Array>(get_class());
        }
    } // namespace SeinPowerslideSpell_FireTrailPoint__Array
} // namespace app::classes::types
