#pragma once
#include <Modloader/app/structs/JobThreadConfigurator_SaveIOThreadingMode__Enum.h>
#include <Modloader/app/structs/JobThreadConfigurator_SaveIOThreadingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobThreadConfigurator_SaveIOThreadingMode__Enum {
        inline app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class** type_info() {
            static app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class>(type_info(), "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator", "SaveIOThreadingMode");
        }
        inline app::JobThreadConfigurator_SaveIOThreadingMode__Enum* create() {
            return il2cpp::create_object<app::JobThreadConfigurator_SaveIOThreadingMode__Enum>(get_class());
        }
    } // namespace JobThreadConfigurator_SaveIOThreadingMode__Enum
} // namespace app::classes::types
