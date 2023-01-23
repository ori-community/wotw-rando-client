#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstraintPositionOffset__Class.h>
#include <Modloader/app/structs/ConstraintPositionOffset.h>

namespace app::classes::types {
    namespace ConstraintPositionOffset {
        namespace {
            inline app::ConstraintPositionOffset__Class* type_info_ref = nullptr;
        }
        inline app::ConstraintPositionOffset__Class** type_info = &type_info_ref;
        inline app::ConstraintPositionOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPositionOffset__Class>(type_info, "RootMotion.FinalIK", "ConstraintPositionOffset");
        }
        inline app::ConstraintPositionOffset* create() {
            return il2cpp::create_object<app::ConstraintPositionOffset>(get_class());
        }
    } // namespace ConstraintPositionOffset
} // namespace app::classes::types
