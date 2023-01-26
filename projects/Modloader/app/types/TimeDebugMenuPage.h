#pragma once
#include <Modloader/app/structs/TimeDebugMenuPage.h>
#include <Modloader/app/structs/TimeDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeDebugMenuPage {
        inline app::TimeDebugMenuPage__Class** type_info() {
            static app::TimeDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TimeDebugMenuPage__Class>(type_info(), "", "TimeDebugMenuPage");
        }
        inline app::TimeDebugMenuPage* create() {
            return il2cpp::create_object<app::TimeDebugMenuPage>(get_class());
        }
    } // namespace TimeDebugMenuPage
} // namespace app::classes::types
