#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MiscDebugMenuPage__Class.h>
#include <Modloader/app/structs/MiscDebugMenuPage.h>

namespace app::classes::types {
    namespace MiscDebugMenuPage {
        namespace {
            inline app::MiscDebugMenuPage__Class* type_info_ref = nullptr;
        }
        inline app::MiscDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::MiscDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::MiscDebugMenuPage__Class>(type_info, "", "MiscDebugMenuPage");
        }
        inline app::MiscDebugMenuPage* create() {
            return il2cpp::create_object<app::MiscDebugMenuPage>(get_class());
        }
    } // namespace MiscDebugMenuPage
} // namespace app::classes::types
