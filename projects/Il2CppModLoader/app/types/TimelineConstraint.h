#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineConstraint__Class** type_info;
        inline app::TimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstraint__Class>(type_info, "Moon.Timeline", "TimelineConstraint");
        }
        inline app::TimelineConstraint* create() {
            return il2cpp::create_object<app::TimelineConstraint>(get_class());
        }
    } // namespace TimelineConstraint
} // namespace app::classes::types
