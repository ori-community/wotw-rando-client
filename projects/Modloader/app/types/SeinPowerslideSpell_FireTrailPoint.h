#pragma once
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint.h>
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint__Array.h>
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell_FireTrailPoint {
        inline app::SeinPowerslideSpell_FireTrailPoint__Class** type_info() {
            static app::SeinPowerslideSpell_FireTrailPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPowerslideSpell_FireTrailPoint__Class**)(modloader::win::memory::resolve_rva(0x04792778));
            }
            return cache;
        }
        inline app::SeinPowerslideSpell_FireTrailPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPowerslideSpell_FireTrailPoint__Class>(type_info(), "", "SeinPowerslideSpell", "FireTrailPoint");
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
