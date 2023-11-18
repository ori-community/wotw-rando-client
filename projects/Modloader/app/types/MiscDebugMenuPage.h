#pragma once
#include <Modloader/app/structs/MiscDebugMenuPage.h>
#include <Modloader/app/structs/MiscDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MiscDebugMenuPage {
        inline app::MiscDebugMenuPage__Class** type_info() {
            static app::MiscDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MiscDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MiscDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::MiscDebugMenuPage__Class>(type_info(), "", "MiscDebugMenuPage");
        }
        inline app::MiscDebugMenuPage* create() {
            return il2cpp::create_object<app::MiscDebugMenuPage>(get_class());
        }
    } // namespace MiscDebugMenuPage
} // namespace app::classes::types
