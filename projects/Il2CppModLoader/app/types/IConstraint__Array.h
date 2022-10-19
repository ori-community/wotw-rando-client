#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstraint__Array {
        namespace {
            inline app::IConstraint__Array__Class* type_info_ref = nullptr;
        }
        inline app::IConstraint__Array__Class** type_info = &type_info_ref;
        inline app::IConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::IConstraint__Array__Class>(type_info, "Moon.Timeline.Constraints", "IConstraint[]");
        }
        inline app::IConstraint__Array* create() {
            return il2cpp::create_object<app::IConstraint__Array>(get_class());
        }
    } // namespace IConstraint__Array
} // namespace app::classes::types
