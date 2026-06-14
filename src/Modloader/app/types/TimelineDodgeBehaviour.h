#pragma once
#include <Modloader/app/structs/TimelineDodgeBehaviour.h>
#include <Modloader/app/structs/TimelineDodgeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineDodgeBehaviour {
        inline app::TimelineDodgeBehaviour__Class** type_info() {
            static app::TimelineDodgeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineDodgeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineDodgeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineDodgeBehaviour__Class>(type_info(), "Moon", "TimelineDodgeBehaviour");
        }
        inline app::TimelineDodgeBehaviour* create() {
            return il2cpp::create_object<app::TimelineDodgeBehaviour>(get_class());
        }
    } // namespace TimelineDodgeBehaviour
} // namespace app::classes::types
