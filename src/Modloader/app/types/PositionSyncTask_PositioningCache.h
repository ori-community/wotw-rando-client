#pragma once
#include <Modloader/app/structs/PositionSyncTask_PositioningCache.h>
#include <Modloader/app/structs/PositionSyncTask_PositioningCache__Boxed.h>
#include <Modloader/app/structs/PositionSyncTask_PositioningCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionSyncTask_PositioningCache {
        inline app::PositionSyncTask_PositioningCache__Class** type_info() {
            static app::PositionSyncTask_PositioningCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionSyncTask_PositioningCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionSyncTask_PositioningCache__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionSyncTask_PositioningCache__Class>(type_info(), "Moon.Wwise", "PositionSyncTask", "PositioningCache");
        }
        inline app::PositionSyncTask_PositioningCache* create() {
            return il2cpp::create_object<app::PositionSyncTask_PositioningCache>(get_class());
        }
        inline app::PositionSyncTask_PositioningCache__Boxed* box(app::PositionSyncTask_PositioningCache value) {
            return il2cpp::box_value<app::PositionSyncTask_PositioningCache__Boxed>(get_class(), value);
        }
    } // namespace PositionSyncTask_PositioningCache
} // namespace app::classes::types
