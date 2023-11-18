#pragma once
#include <Modloader/app/structs/AmplifyColorTriggerProxyBase.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxyBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxyBase {
        inline app::AmplifyColorTriggerProxyBase__Class** type_info() {
            static app::AmplifyColorTriggerProxyBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorTriggerProxyBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorTriggerProxyBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxyBase__Class>(type_info(), "", "AmplifyColorTriggerProxyBase");
        }
        inline app::AmplifyColorTriggerProxyBase* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxyBase>(get_class());
        }
    } // namespace AmplifyColorTriggerProxyBase
} // namespace app::classes::types
