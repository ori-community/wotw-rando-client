#pragma once
#include <Modloader/app/structs/TimelineBehaviourNew.h>
#include <Modloader/app/structs/TimelineBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineBehaviourNew {
        inline app::TimelineBehaviourNew__Class** type_info() {
            static app::TimelineBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TimelineBehaviourNew__Class>(type_info(), "", "TimelineBehaviourNew");
        }
        inline app::TimelineBehaviourNew* create() {
            return il2cpp::create_object<app::TimelineBehaviourNew>(get_class());
        }
    } // namespace TimelineBehaviourNew
} // namespace app::classes::types
