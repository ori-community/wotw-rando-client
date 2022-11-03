#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsInRangeFromTarget {
        namespace {
            inline app::IsInRangeFromTarget__Class* type_info_ref = nullptr;
        }
        inline app::IsInRangeFromTarget__Class** type_info = &type_info_ref;
        inline app::IsInRangeFromTarget__Class* get_class() {
            return il2cpp::get_class<app::IsInRangeFromTarget__Class>(type_info, "Moon.BehaviourSystem", "IsInRangeFromTarget");
        }
        inline app::IsInRangeFromTarget* create() {
            return il2cpp::create_object<app::IsInRangeFromTarget>(get_class());
        }
    } // namespace IsInRangeFromTarget
} // namespace app::classes::types
