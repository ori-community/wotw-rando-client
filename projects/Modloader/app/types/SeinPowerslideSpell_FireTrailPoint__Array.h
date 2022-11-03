#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell_FireTrailPoint__Array {
        namespace {
            inline app::SeinPowerslideSpell_FireTrailPoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array__Class** type_info = &type_info_ref;
        inline app::SeinPowerslideSpell_FireTrailPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerslideSpell_FireTrailPoint__Array__Class>(type_info, "", "SeinPowerslideSpell+FireTrailPoint[]");
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array* create() {
            return il2cpp::create_object<app::SeinPowerslideSpell_FireTrailPoint__Array>(get_class());
        }
    } // namespace SeinPowerslideSpell_FireTrailPoint__Array
} // namespace app::classes::types
