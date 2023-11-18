#pragma once
#include <Modloader/app/structs/EarlyUpdate_DirectorSampleTime.h>
#include <Modloader/app/structs/EarlyUpdate_DirectorSampleTime__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_DirectorSampleTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_DirectorSampleTime {
        inline app::EarlyUpdate_DirectorSampleTime__Class** type_info() {
            static app::EarlyUpdate_DirectorSampleTime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_DirectorSampleTime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_DirectorSampleTime__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_DirectorSampleTime__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "DirectorSampleTime");
        }
        inline app::EarlyUpdate_DirectorSampleTime* create() {
            return il2cpp::create_object<app::EarlyUpdate_DirectorSampleTime>(get_class());
        }
        inline app::EarlyUpdate_DirectorSampleTime__Boxed* box(app::EarlyUpdate_DirectorSampleTime value) {
            return il2cpp::box_value<app::EarlyUpdate_DirectorSampleTime__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_DirectorSampleTime
} // namespace app::classes::types
