#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
