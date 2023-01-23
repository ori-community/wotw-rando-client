#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy__Class.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxy {
        namespace {
            inline app::AmplifyColorTriggerProxy__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorTriggerProxy__Class** type_info = &type_info_ref;
        inline app::AmplifyColorTriggerProxy__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxy__Class>(type_info, "", "AmplifyColorTriggerProxy");
        }
        inline app::AmplifyColorTriggerProxy* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxy>(get_class());
        }
    } // namespace AmplifyColorTriggerProxy
} // namespace app::classes::types
