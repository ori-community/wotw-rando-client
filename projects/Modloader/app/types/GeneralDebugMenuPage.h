#pragma once
#include <Modloader/app/structs/GeneralDebugMenuPage.h>
#include <Modloader/app/structs/GeneralDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage {
        inline app::GeneralDebugMenuPage__Class** type_info() {
            static app::GeneralDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GeneralDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GeneralDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::GeneralDebugMenuPage__Class>(type_info(), "", "GeneralDebugMenuPage");
        }
        inline app::GeneralDebugMenuPage* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage>(get_class());
        }
    } // namespace GeneralDebugMenuPage
} // namespace app::classes::types
