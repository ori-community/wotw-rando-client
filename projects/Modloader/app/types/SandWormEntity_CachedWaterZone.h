#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity_CachedWaterZone {
        namespace {
            inline app::SandWormEntity_CachedWaterZone__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_CachedWaterZone__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_CachedWaterZone__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_CachedWaterZone__Class>(type_info, "", "SandWormEntity", "CachedWaterZone");
        }
        inline app::SandWormEntity_CachedWaterZone* create() {
            return il2cpp::create_object<app::SandWormEntity_CachedWaterZone>(get_class());
        }
        inline app::SandWormEntity_CachedWaterZone__Boxed* box(app::SandWormEntity_CachedWaterZone value) {
            return il2cpp::box_value<app::SandWormEntity_CachedWaterZone__Boxed>(get_class(), value);
        }
    } // namespace SandWormEntity_CachedWaterZone
} // namespace app::classes::types
