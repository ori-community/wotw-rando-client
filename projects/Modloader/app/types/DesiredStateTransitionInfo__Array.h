#pragma once
#include <Modloader/app/structs/DesiredStateTransitionInfo__Array.h>
#include <Modloader/app/structs/DesiredStateTransitionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredStateTransitionInfo__Array {
        inline app::DesiredStateTransitionInfo__Array__Class** type_info() {
            static app::DesiredStateTransitionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredStateTransitionInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredStateTransitionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredStateTransitionInfo__Array__Class>(type_info(), "Moon", "DesiredStateTransitionInfo[]");
        }
        inline app::DesiredStateTransitionInfo__Array* create() {
            return il2cpp::create_object<app::DesiredStateTransitionInfo__Array>(get_class());
        }
    } // namespace DesiredStateTransitionInfo__Array
} // namespace app::classes::types
