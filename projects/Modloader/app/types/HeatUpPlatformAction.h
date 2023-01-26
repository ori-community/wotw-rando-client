#pragma once
#include <Modloader/app/structs/HeatUpPlatformAction.h>
#include <Modloader/app/structs/HeatUpPlatformAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeatUpPlatformAction {
        inline app::HeatUpPlatformAction__Class** type_info() {
            static app::HeatUpPlatformAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeatUpPlatformAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeatUpPlatformAction__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatformAction__Class>(type_info(), "", "HeatUpPlatformAction");
        }
        inline app::HeatUpPlatformAction* create() {
            return il2cpp::create_object<app::HeatUpPlatformAction>(get_class());
        }
    } // namespace HeatUpPlatformAction
} // namespace app::classes::types
