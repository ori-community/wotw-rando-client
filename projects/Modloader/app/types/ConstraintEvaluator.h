#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintEvaluator {
        inline app::ConstraintEvaluator__Class** type_info = (app::ConstraintEvaluator__Class**)(modloader::win::memory::resolve_rva(0x04793188));
        inline app::ConstraintEvaluator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEvaluator__Class>(type_info, "Moon.Timeline.Constraints", "ConstraintEvaluator");
        }
        inline app::ConstraintEvaluator* create() {
            return il2cpp::create_object<app::ConstraintEvaluator>(get_class());
        }
    } // namespace ConstraintEvaluator
} // namespace app::classes::types
