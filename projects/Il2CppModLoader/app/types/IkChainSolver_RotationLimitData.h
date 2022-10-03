#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_RotationLimitData {
        namespace {
            app::IkChainSolver_RotationLimitData__Class* type_info_ref = nullptr;
        }
        app::IkChainSolver_RotationLimitData__Class** type_info = &type_info_ref;
        inline app::IkChainSolver_RotationLimitData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_RotationLimitData__Class>(type_info, "Moon", "IkChainSolver", "RotationLimitData");
        }
        inline app::IkChainSolver_RotationLimitData* create() {
            return il2cpp::create_object<app::IkChainSolver_RotationLimitData>(get_class());
        }
        inline app::IkChainSolver_RotationLimitData__Boxed* box(app::IkChainSolver_RotationLimitData value) {
            return il2cpp::box_value<app::IkChainSolver_RotationLimitData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_RotationLimitData
} // namespace app::classes::types
