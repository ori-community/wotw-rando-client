#pragma once
#include <Modloader/app/structs/ITimelineStateRequirementResolver__Array.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolver__Array {
        inline app::ITimelineStateRequirementResolver__Array__Class** type_info() {
            static app::ITimelineStateRequirementResolver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineStateRequirementResolver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineStateRequirementResolver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolver__Array__Class>(type_info(), "", "ITimelineStateRequirementResolver[]");
        }
        inline app::ITimelineStateRequirementResolver__Array* create() {
            return il2cpp::create_object<app::ITimelineStateRequirementResolver__Array>(get_class());
        }
    } // namespace ITimelineStateRequirementResolver__Array
} // namespace app::classes::types
