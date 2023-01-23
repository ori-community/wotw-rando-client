#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineConstraint__Class.h>
#include <Modloader/app/structs/TimelineConstraint.h>

namespace app::classes::types {
    namespace TimelineConstraint {
        inline app::TimelineConstraint__Class** type_info = (app::TimelineConstraint__Class**)(modloader::win::memory::resolve_rva(0x047244E0));
        inline app::TimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstraint__Class>(type_info, "Moon.Timeline", "TimelineConstraint");
        }
        inline app::TimelineConstraint* create() {
            return il2cpp::create_object<app::TimelineConstraint>(get_class());
        }
    } // namespace TimelineConstraint
} // namespace app::classes::types
