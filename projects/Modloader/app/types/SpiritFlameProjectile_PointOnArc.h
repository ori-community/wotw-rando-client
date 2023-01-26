#pragma once
#include <Modloader/app/structs/SpiritFlameProjectile_PointOnArc.h>
#include <Modloader/app/structs/SpiritFlameProjectile_PointOnArc__Boxed.h>
#include <Modloader/app/structs/SpiritFlameProjectile_PointOnArc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritFlameProjectile_PointOnArc {
        inline app::SpiritFlameProjectile_PointOnArc__Class** type_info() {
            static app::SpiritFlameProjectile_PointOnArc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritFlameProjectile_PointOnArc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritFlameProjectile_PointOnArc__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritFlameProjectile_PointOnArc__Class>(type_info(), "", "SpiritFlameProjectile", "PointOnArc");
        }
        inline app::SpiritFlameProjectile_PointOnArc* create() {
            return il2cpp::create_object<app::SpiritFlameProjectile_PointOnArc>(get_class());
        }
        inline app::SpiritFlameProjectile_PointOnArc__Boxed* box(app::SpiritFlameProjectile_PointOnArc value) {
            return il2cpp::box_value<app::SpiritFlameProjectile_PointOnArc__Boxed>(get_class(), value);
        }
    } // namespace SpiritFlameProjectile_PointOnArc
} // namespace app::classes::types
