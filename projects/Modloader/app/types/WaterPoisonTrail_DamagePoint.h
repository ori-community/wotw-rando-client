#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Class.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Boxed.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Array.h>

namespace app::classes::types {
    namespace WaterPoisonTrail_DamagePoint {
        inline app::WaterPoisonTrail_DamagePoint__Class** type_info = (app::WaterPoisonTrail_DamagePoint__Class**)(modloader::win::memory::resolve_rva(0x0474E240));
        inline app::WaterPoisonTrail_DamagePoint__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoisonTrail_DamagePoint__Class>(type_info, "", "WaterPoisonTrail", "DamagePoint");
        }
        inline app::WaterPoisonTrail_DamagePoint* create() {
            return il2cpp::create_object<app::WaterPoisonTrail_DamagePoint>(get_class());
        }
        inline app::WaterPoisonTrail_DamagePoint__Boxed* box(app::WaterPoisonTrail_DamagePoint value) {
            return il2cpp::box_value<app::WaterPoisonTrail_DamagePoint__Boxed>(get_class(), value);
        }
        inline app::WaterPoisonTrail_DamagePoint__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterPoisonTrail_DamagePoint__Array>(get_class(), size);
        }
        inline app::WaterPoisonTrail_DamagePoint__Array* create_array(const std::vector<app::WaterPoisonTrail_DamagePoint>& items) {
            return il2cpp::array_new<app::WaterPoisonTrail_DamagePoint__Array>(get_class(), items);
        }
    } // namespace WaterPoisonTrail_DamagePoint
} // namespace app::classes::types
