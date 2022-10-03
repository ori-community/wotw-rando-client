#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineStateCondition {
        namespace {
            app::TimelineStateCondition__Class* type_info_ref = nullptr;
        }
        app::TimelineStateCondition__Class** type_info = &type_info_ref;
        inline app::TimelineStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineStateCondition__Class>(type_info, "", "TimelineStateCondition");
        }
        inline app::TimelineStateCondition* create() {
            return il2cpp::create_object<app::TimelineStateCondition>(get_class());
        }
    } // namespace TimelineStateCondition
} // namespace app::classes::types
