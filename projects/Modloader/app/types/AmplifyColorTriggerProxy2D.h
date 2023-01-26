#pragma once
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxy2D {
        inline app::AmplifyColorTriggerProxy2D__Class** type_info() {
            static app::AmplifyColorTriggerProxy2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorTriggerProxy2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorTriggerProxy2D__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxy2D__Class>(type_info(), "", "AmplifyColorTriggerProxy2D");
        }
        inline app::AmplifyColorTriggerProxy2D* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxy2D>(get_class());
        }
    } // namespace AmplifyColorTriggerProxy2D
} // namespace app::classes::types
