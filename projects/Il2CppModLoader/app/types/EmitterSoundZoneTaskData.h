#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmitterSoundZoneTaskData {
        namespace {
            app::EmitterSoundZoneTaskData__Class* type_info_ref = nullptr;
        }
        app::EmitterSoundZoneTaskData__Class** type_info = &type_info_ref;
        inline app::EmitterSoundZoneTaskData__Class* get_class() {
            return il2cpp::get_class<app::EmitterSoundZoneTaskData__Class>(type_info, "", "EmitterSoundZoneTaskData");
        }
        inline app::EmitterSoundZoneTaskData* create() {
            return il2cpp::create_object<app::EmitterSoundZoneTaskData>(get_class());
        }
        inline app::EmitterSoundZoneTaskData__Boxed* box(app::EmitterSoundZoneTaskData value) {
            return il2cpp::box_value<app::EmitterSoundZoneTaskData__Boxed>(get_class(), value);
        }
    } // namespace EmitterSoundZoneTaskData
} // namespace app::classes::types
