#pragma once
#include <Modloader/app/structs/SearchDebugMenuPage.h>
#include <Modloader/app/structs/SearchDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SearchDebugMenuPage {
        inline app::SearchDebugMenuPage__Class** type_info() {
            static app::SearchDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SearchDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SearchDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::SearchDebugMenuPage__Class>(type_info(), "", "SearchDebugMenuPage");
        }
        inline app::SearchDebugMenuPage* create() {
            return il2cpp::create_object<app::SearchDebugMenuPage>(get_class());
        }
    } // namespace SearchDebugMenuPage
} // namespace app::classes::types
