#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListenerSoundZoneTaskData__Class.h>
#include <Modloader/app/structs/ListenerSoundZoneTaskData.h>
#include <Modloader/app/structs/ListenerSoundZoneTaskData__Boxed.h>

namespace app::classes::types {
    namespace ListenerSoundZoneTaskData {
        namespace {
            inline app::ListenerSoundZoneTaskData__Class* type_info_ref = nullptr;
        }
        inline app::ListenerSoundZoneTaskData__Class** type_info = &type_info_ref;
        inline app::ListenerSoundZoneTaskData__Class* get_class() {
            return il2cpp::get_class<app::ListenerSoundZoneTaskData__Class>(type_info, "", "ListenerSoundZoneTaskData");
        }
        inline app::ListenerSoundZoneTaskData* create() {
            return il2cpp::create_object<app::ListenerSoundZoneTaskData>(get_class());
        }
        inline app::ListenerSoundZoneTaskData__Boxed* box(app::ListenerSoundZoneTaskData value) {
            return il2cpp::box_value<app::ListenerSoundZoneTaskData__Boxed>(get_class(), value);
        }
    } // namespace ListenerSoundZoneTaskData
} // namespace app::classes::types
