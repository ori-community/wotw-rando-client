#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineActionTrigger {
        namespace {
            app::TimelineActionTrigger__Class* type_info_ref = nullptr;
        }
        app::TimelineActionTrigger__Class** type_info = &type_info_ref;
        inline app::TimelineActionTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimelineActionTrigger__Class>(type_info, "", "TimelineActionTrigger");
        }
        inline app::TimelineActionTrigger* create() {
            return il2cpp::create_object<app::TimelineActionTrigger>(get_class());
        }
    } // namespace TimelineActionTrigger
} // namespace app::classes::types
