#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritFlameProjectile_PointOnArc {
        namespace {
            inline app::SpiritFlameProjectile_PointOnArc__Class* type_info_ref = nullptr;
        }
        inline app::SpiritFlameProjectile_PointOnArc__Class** type_info = &type_info_ref;
        inline app::SpiritFlameProjectile_PointOnArc__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritFlameProjectile_PointOnArc__Class>(type_info, "", "SpiritFlameProjectile", "PointOnArc");
        }
        inline app::SpiritFlameProjectile_PointOnArc* create() {
            return il2cpp::create_object<app::SpiritFlameProjectile_PointOnArc>(get_class());
        }
        inline app::SpiritFlameProjectile_PointOnArc__Boxed* box(app::SpiritFlameProjectile_PointOnArc value) {
            return il2cpp::box_value<app::SpiritFlameProjectile_PointOnArc__Boxed>(get_class(), value);
        }
    } // namespace SpiritFlameProjectile_PointOnArc
} // namespace app::classes::types
