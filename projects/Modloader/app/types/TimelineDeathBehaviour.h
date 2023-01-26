#pragma once
#include <Modloader/app/structs/TimelineDeathBehaviour.h>
#include <Modloader/app/structs/TimelineDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineDeathBehaviour {
        inline app::TimelineDeathBehaviour__Class** type_info() {
            static app::TimelineDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineDeathBehaviour__Class>(type_info(), "", "TimelineDeathBehaviour");
        }
        inline app::TimelineDeathBehaviour* create() {
            return il2cpp::create_object<app::TimelineDeathBehaviour>(get_class());
        }
    } // namespace TimelineDeathBehaviour
} // namespace app::classes::types
