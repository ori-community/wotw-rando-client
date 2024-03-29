#pragma once
#include <Modloader/app/structs/TimelineSolver.h>
#include <Modloader/app/structs/TimelineSolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineSolver {
        inline app::TimelineSolver__Class** type_info() {
            static app::TimelineSolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineSolver__Class**)(modloader::win::memory::resolve_rva(0x047204B8));
            }
            return cache;
        }
        inline app::TimelineSolver__Class* get_class() {
            return il2cpp::get_class<app::TimelineSolver__Class>(type_info(), "Moon.Timeline.Constraints", "TimelineSolver");
        }
        inline app::TimelineSolver* create() {
            return il2cpp::create_object<app::TimelineSolver>(get_class());
        }
    } // namespace TimelineSolver
} // namespace app::classes::types
