#pragma once
#include <Modloader/app/structs/TimelineConstraint.h>
#include <Modloader/app/structs/TimelineConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineConstraint {
        inline app::TimelineConstraint__Class** type_info() {
            static app::TimelineConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineConstraint__Class**)(modloader::win::memory::resolve_rva(0x047244E0));
            }
            return cache;
        }
        inline app::TimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstraint__Class>(type_info(), "Moon.Timeline", "TimelineConstraint");
        }
        inline app::TimelineConstraint* create() {
            return il2cpp::create_object<app::TimelineConstraint>(get_class());
        }
    } // namespace TimelineConstraint
} // namespace app::classes::types
