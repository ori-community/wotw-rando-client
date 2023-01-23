#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CustomTimelineConstraint__Class.h>
#include <Modloader/app/structs/CustomTimelineConstraint.h>

namespace app::classes::types {
    namespace CustomTimelineConstraint {
        namespace {
            inline app::CustomTimelineConstraint__Class* type_info_ref = nullptr;
        }
        inline app::CustomTimelineConstraint__Class** type_info = &type_info_ref;
        inline app::CustomTimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::CustomTimelineConstraint__Class>(type_info, "Moon.Timeline", "CustomTimelineConstraint");
        }
        inline app::CustomTimelineConstraint* create() {
            return il2cpp::create_object<app::CustomTimelineConstraint>(get_class());
        }
    } // namespace CustomTimelineConstraint
} // namespace app::classes::types
