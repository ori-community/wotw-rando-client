#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MiscDebugMenuPage {
        namespace {
            app::MiscDebugMenuPage__Class* type_info_ref = nullptr;
        }
        app::MiscDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::MiscDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::MiscDebugMenuPage__Class>(type_info, "", "MiscDebugMenuPage");
        }
        inline app::MiscDebugMenuPage* create() {
            return il2cpp::create_object<app::MiscDebugMenuPage>(get_class());
        }
    } // namespace MiscDebugMenuPage
} // namespace app::classes::types
