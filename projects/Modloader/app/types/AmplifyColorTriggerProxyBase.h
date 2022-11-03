#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxyBase {
        namespace {
            inline app::AmplifyColorTriggerProxyBase__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorTriggerProxyBase__Class** type_info = &type_info_ref;
        inline app::AmplifyColorTriggerProxyBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxyBase__Class>(type_info, "", "AmplifyColorTriggerProxyBase");
        }
        inline app::AmplifyColorTriggerProxyBase* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxyBase>(get_class());
        }
    } // namespace AmplifyColorTriggerProxyBase
} // namespace app::classes::types
