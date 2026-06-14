#pragma once
#include <Modloader/app/structs/EmitterSoundZoneTaskData.h>
#include <Modloader/app/structs/EmitterSoundZoneTaskData__Boxed.h>
#include <Modloader/app/structs/EmitterSoundZoneTaskData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmitterSoundZoneTaskData {
        inline app::EmitterSoundZoneTaskData__Class** type_info() {
            static app::EmitterSoundZoneTaskData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmitterSoundZoneTaskData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmitterSoundZoneTaskData__Class* get_class() {
            return il2cpp::get_class<app::EmitterSoundZoneTaskData__Class>(type_info(), "", "EmitterSoundZoneTaskData");
        }
        inline app::EmitterSoundZoneTaskData* create() {
            return il2cpp::create_object<app::EmitterSoundZoneTaskData>(get_class());
        }
        inline app::EmitterSoundZoneTaskData__Boxed* box(app::EmitterSoundZoneTaskData value) {
            return il2cpp::box_value<app::EmitterSoundZoneTaskData__Boxed>(get_class(), value);
        }
    } // namespace EmitterSoundZoneTaskData
} // namespace app::classes::types
