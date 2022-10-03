#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineSolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineSolver__Class** type_info;
        inline app::TimelineSolver__Class* get_class() {
            return il2cpp::get_class<app::TimelineSolver__Class>(type_info, "Moon.Timeline.Constraints", "TimelineSolver");
        }
        inline app::TimelineSolver* create() {
            return il2cpp::create_object<app::TimelineSolver>(get_class());
        }
    } // namespace TimelineSolver
} // namespace app::classes::types
