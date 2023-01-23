#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstraintRotation__Class.h>
#include <Modloader/app/structs/ConstraintRotation.h>

namespace app::classes::types {
    namespace ConstraintRotation {
        namespace {
            inline app::ConstraintRotation__Class* type_info_ref = nullptr;
        }
        inline app::ConstraintRotation__Class** type_info = &type_info_ref;
        inline app::ConstraintRotation__Class* get_class() {
            return il2cpp::get_class<app::ConstraintRotation__Class>(type_info, "RootMotion.FinalIK", "ConstraintRotation");
        }
        inline app::ConstraintRotation* create() {
            return il2cpp::create_object<app::ConstraintRotation>(get_class());
        }
    } // namespace ConstraintRotation
} // namespace app::classes::types
