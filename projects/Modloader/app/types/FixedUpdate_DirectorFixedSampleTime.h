#pragma once
#include <Modloader/app/structs/FixedUpdate_DirectorFixedSampleTime.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedSampleTime__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedSampleTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_DirectorFixedSampleTime {
        inline app::FixedUpdate_DirectorFixedSampleTime__Class** type_info() {
            static app::FixedUpdate_DirectorFixedSampleTime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_DirectorFixedSampleTime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_DirectorFixedSampleTime__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_DirectorFixedSampleTime__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "DirectorFixedSampleTime");
        }
        inline app::FixedUpdate_DirectorFixedSampleTime* create() {
            return il2cpp::create_object<app::FixedUpdate_DirectorFixedSampleTime>(get_class());
        }
        inline app::FixedUpdate_DirectorFixedSampleTime__Boxed* box(app::FixedUpdate_DirectorFixedSampleTime value) {
            return il2cpp::box_value<app::FixedUpdate_DirectorFixedSampleTime__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_DirectorFixedSampleTime
} // namespace app::classes::types
