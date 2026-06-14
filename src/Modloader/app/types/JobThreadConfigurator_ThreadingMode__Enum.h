#pragma once
#include <Modloader/app/structs/JobThreadConfigurator_ThreadingMode__Enum.h>
#include <Modloader/app/structs/JobThreadConfigurator_ThreadingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobThreadConfigurator_ThreadingMode__Enum {
        inline app::JobThreadConfigurator_ThreadingMode__Enum__Class** type_info() {
            static app::JobThreadConfigurator_ThreadingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobThreadConfigurator_ThreadingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobThreadConfigurator_ThreadingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JobThreadConfigurator_ThreadingMode__Enum__Class>(type_info(), "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator", "ThreadingMode");
        }
        inline app::JobThreadConfigurator_ThreadingMode__Enum* create() {
            return il2cpp::create_object<app::JobThreadConfigurator_ThreadingMode__Enum>(get_class());
        }
    } // namespace JobThreadConfigurator_ThreadingMode__Enum
} // namespace app::classes::types
