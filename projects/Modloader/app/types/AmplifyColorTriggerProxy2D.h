#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D__Class.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D.h>

namespace app::classes::types {
    namespace AmplifyColorTriggerProxy2D {
        namespace {
            inline app::AmplifyColorTriggerProxy2D__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorTriggerProxy2D__Class** type_info = &type_info_ref;
        inline app::AmplifyColorTriggerProxy2D__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorTriggerProxy2D__Class>(type_info, "", "AmplifyColorTriggerProxy2D");
        }
        inline app::AmplifyColorTriggerProxy2D* create() {
            return il2cpp::create_object<app::AmplifyColorTriggerProxy2D>(get_class());
        }
    } // namespace AmplifyColorTriggerProxy2D
} // namespace app::classes::types
