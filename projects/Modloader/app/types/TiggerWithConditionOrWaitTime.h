#pragma once
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime.h>
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TiggerWithConditionOrWaitTime {
        inline app::TiggerWithConditionOrWaitTime__Class** type_info() {
            static app::TiggerWithConditionOrWaitTime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TiggerWithConditionOrWaitTime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TiggerWithConditionOrWaitTime__Class* get_class() {
            return il2cpp::get_class<app::TiggerWithConditionOrWaitTime__Class>(type_info(), "", "TiggerWithConditionOrWaitTime");
        }
        inline app::TiggerWithConditionOrWaitTime* create() {
            return il2cpp::create_object<app::TiggerWithConditionOrWaitTime>(get_class());
        }
    } // namespace TiggerWithConditionOrWaitTime
} // namespace app::classes::types
