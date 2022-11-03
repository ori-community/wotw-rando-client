#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineSolver {
        inline app::TimelineSolver__Class** type_info = (app::TimelineSolver__Class**)(modloader::win::memory::resolve_rva(0x047204B8));
        inline app::TimelineSolver__Class* get_class() {
            return il2cpp::get_class<app::TimelineSolver__Class>(type_info, "Moon.Timeline.Constraints", "TimelineSolver");
        }
        inline app::TimelineSolver* create() {
            return il2cpp::create_object<app::TimelineSolver>(get_class());
        }
    } // namespace TimelineSolver
} // namespace app::classes::types
