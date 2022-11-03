#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintPosition {
        namespace {
            inline app::ConstraintPosition__Class* type_info_ref = nullptr;
        }
        inline app::ConstraintPosition__Class** type_info = &type_info_ref;
        inline app::ConstraintPosition__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPosition__Class>(type_info, "RootMotion.FinalIK", "ConstraintPosition");
        }
        inline app::ConstraintPosition* create() {
            return il2cpp::create_object<app::ConstraintPosition>(get_class());
        }
    } // namespace ConstraintPosition
} // namespace app::classes::types
