#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolver__Array {
        namespace {
            app::ITimelineStateRequirementResolver__Array__Class* type_info_ref = nullptr;
        }
        app::ITimelineStateRequirementResolver__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineStateRequirementResolver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolver__Array__Class>(type_info, "", "ITimelineStateRequirementResolver[]");
        }
        inline app::ITimelineStateRequirementResolver__Array* create() {
            return il2cpp::create_object<app::ITimelineStateRequirementResolver__Array>(get_class());
        }
    } // namespace ITimelineStateRequirementResolver__Array
} // namespace app::classes::types
