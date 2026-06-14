#pragma once
#include <Modloader/app/structs/IsInRangeFromTarget.h>
#include <Modloader/app/structs/IsInRangeFromTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsInRangeFromTarget {
        inline app::IsInRangeFromTarget__Class** type_info() {
            static app::IsInRangeFromTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsInRangeFromTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsInRangeFromTarget__Class* get_class() {
            return il2cpp::get_class<app::IsInRangeFromTarget__Class>(type_info(), "Moon.BehaviourSystem", "IsInRangeFromTarget");
        }
        inline app::IsInRangeFromTarget* create() {
            return il2cpp::create_object<app::IsInRangeFromTarget>(get_class());
        }
    } // namespace IsInRangeFromTarget
} // namespace app::classes::types
