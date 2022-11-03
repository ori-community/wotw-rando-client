#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SearchDebugMenuPage {
        namespace {
            inline app::SearchDebugMenuPage__Class* type_info_ref = nullptr;
        }
        inline app::SearchDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::SearchDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::SearchDebugMenuPage__Class>(type_info, "", "SearchDebugMenuPage");
        }
        inline app::SearchDebugMenuPage* create() {
            return il2cpp::create_object<app::SearchDebugMenuPage>(get_class());
        }
    } // namespace SearchDebugMenuPage
} // namespace app::classes::types
