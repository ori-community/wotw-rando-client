#pragma once
#include <Modloader/app/structs/TimeUtility.h>
#include <Modloader/app/structs/TimeUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeUtility {
        inline app::TimeUtility__Class** type_info() {
            static app::TimeUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeUtility__Class* get_class() {
            return il2cpp::get_class<app::TimeUtility__Class>(type_info(), "", "TimeUtility");
        }
        inline app::TimeUtility* create() {
            return il2cpp::create_object<app::TimeUtility>(get_class());
        }
    } // namespace TimeUtility
} // namespace app::classes::types
