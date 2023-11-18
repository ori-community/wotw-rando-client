#pragma once
#include <Modloader/app/structs/TimelineBehaviour.h>
#include <Modloader/app/structs/TimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineBehaviour {
        inline app::TimelineBehaviour__Class** type_info() {
            static app::TimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineBehaviour__Class>(type_info(), "", "TimelineBehaviour");
        }
        inline app::TimelineBehaviour* create() {
            return il2cpp::create_object<app::TimelineBehaviour>(get_class());
        }
    } // namespace TimelineBehaviour
} // namespace app::classes::types
