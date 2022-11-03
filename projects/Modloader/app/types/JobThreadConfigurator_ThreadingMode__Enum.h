#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobThreadConfigurator_ThreadingMode__Enum {
        namespace {
            inline app::JobThreadConfigurator_ThreadingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JobThreadConfigurator_ThreadingMode__Enum__Class** type_info = &type_info_ref;
        inline app::JobThreadConfigurator_ThreadingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JobThreadConfigurator_ThreadingMode__Enum__Class>(type_info, "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator", "ThreadingMode");
        }
        inline app::JobThreadConfigurator_ThreadingMode__Enum* create() {
            return il2cpp::create_object<app::JobThreadConfigurator_ThreadingMode__Enum>(get_class());
        }
    } // namespace JobThreadConfigurator_ThreadingMode__Enum
} // namespace app::classes::types
