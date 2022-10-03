#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_JointData {
        namespace {
            app::IkChainSolver_JointData__Class* type_info_ref = nullptr;
        }
        app::IkChainSolver_JointData__Class** type_info = &type_info_ref;
        inline app::IkChainSolver_JointData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_JointData__Class>(type_info, "Moon", "IkChainSolver", "JointData");
        }
        inline app::IkChainSolver_JointData* create() {
            return il2cpp::create_object<app::IkChainSolver_JointData>(get_class());
        }
        inline app::IkChainSolver_JointData__Boxed* box(app::IkChainSolver_JointData value) {
            return il2cpp::box_value<app::IkChainSolver_JointData__Boxed>(get_class(), value);
        }
        inline app::IkChainSolver_JointData__Array* create_array(int size) {
            return il2cpp::array_new<app::IkChainSolver_JointData__Array>(get_class(), size);
        }
    } // namespace IkChainSolver_JointData
} // namespace app::classes::types
