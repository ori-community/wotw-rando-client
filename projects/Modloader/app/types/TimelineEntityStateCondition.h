#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntityStateCondition {
        namespace {
            inline app::TimelineEntityStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityStateCondition__Class** type_info = &type_info_ref;
        inline app::TimelineEntityStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityStateCondition__Class>(type_info, "", "TimelineEntityStateCondition");
        }
        inline app::TimelineEntityStateCondition* create() {
            return il2cpp::create_object<app::TimelineEntityStateCondition>(get_class());
        }
    } // namespace TimelineEntityStateCondition
} // namespace app::classes::types
