#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayValidator_Constraint__Array {
        namespace {
            inline app::ReplayValidator_Constraint__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReplayValidator_Constraint__Array__Class** type_info = &type_info_ref;
        inline app::ReplayValidator_Constraint__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidator_Constraint__Array__Class>(type_info, "Moon.Race", "ReplayValidator+Constraint[]");
        }
        inline app::ReplayValidator_Constraint__Array* create() {
            return il2cpp::create_object<app::ReplayValidator_Constraint__Array>(get_class());
        }
    } // namespace ReplayValidator_Constraint__Array
} // namespace app::classes::types
