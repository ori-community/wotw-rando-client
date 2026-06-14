#pragma once
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone.h>
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone__Boxed.h>
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_CachedWaterZone {
        inline app::SandWormEntity_CachedWaterZone__Class** type_info() {
            static app::SandWormEntity_CachedWaterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_CachedWaterZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_CachedWaterZone__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_CachedWaterZone__Class>(type_info(), "", "SandWormEntity", "CachedWaterZone");
        }
        inline app::SandWormEntity_CachedWaterZone* create() {
            return il2cpp::create_object<app::SandWormEntity_CachedWaterZone>(get_class());
        }
        inline app::SandWormEntity_CachedWaterZone__Boxed* box(app::SandWormEntity_CachedWaterZone value) {
            return il2cpp::box_value<app::SandWormEntity_CachedWaterZone__Boxed>(get_class(), value);
        }
    } // namespace SandWormEntity_CachedWaterZone
} // namespace app::classes::types
