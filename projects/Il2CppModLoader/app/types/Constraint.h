#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Constraint {
        namespace {
            inline app::Constraint__Class* type_info_ref = nullptr;
        }
        inline app::Constraint__Class** type_info = &type_info_ref;
        inline app::Constraint__Class* get_class() {
            return il2cpp::get_class<app::Constraint__Class>(type_info, "RootMotion.FinalIK", "Constraint");
        }
        inline app::Constraint* create() {
            return il2cpp::create_object<app::Constraint>(get_class());
        }
    } // namespace Constraint
} // namespace app::classes::types
