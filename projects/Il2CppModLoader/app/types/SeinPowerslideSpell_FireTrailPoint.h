#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell_FireTrailPoint {
        inline app::SeinPowerslideSpell_FireTrailPoint__Class** type_info = (app::SeinPowerslideSpell_FireTrailPoint__Class**)(modloader::win::memory::resolve_rva(0x04792778));
        inline app::SeinPowerslideSpell_FireTrailPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPowerslideSpell_FireTrailPoint__Class>(type_info, "", "SeinPowerslideSpell", "FireTrailPoint");
        }
        inline app::SeinPowerslideSpell_FireTrailPoint* create() {
            return il2cpp::create_object<app::SeinPowerslideSpell_FireTrailPoint>(get_class());
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinPowerslideSpell_FireTrailPoint__Array>(get_class(), size);
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Array* create_array(const std::vector<app::SeinPowerslideSpell_FireTrailPoint*>& items) {
            return il2cpp::array_new<app::SeinPowerslideSpell_FireTrailPoint__Array>(get_class(), items);
        }
    } // namespace SeinPowerslideSpell_FireTrailPoint
} // namespace app::classes::types
