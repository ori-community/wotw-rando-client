#pragma once
#include <Modloader/app/structs/AmplifyColorTriggerProxy.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxy {
        inline app::AmplifyColorTriggerProxy__Class** type_info() {
            static app::AmplifyColorTriggerProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorTriggerProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorTriggerProxy__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxy__Class>(type_info(), "", "AmplifyColorTriggerProxy");
        }
        inline app::AmplifyColorTriggerProxy* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxy>(get_class());
        }
    } // namespace AmplifyColorTriggerProxy
} // namespace app::classes::types
