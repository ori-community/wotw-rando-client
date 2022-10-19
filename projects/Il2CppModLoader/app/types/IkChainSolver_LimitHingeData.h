#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IkChainSolver_LimitHingeData {
        namespace {
            inline app::IkChainSolver_LimitHingeData__Class* type_info_ref = nullptr;
        }
        inline app::IkChainSolver_LimitHingeData__Class** type_info = &type_info_ref;
        inline app::IkChainSolver_LimitHingeData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_LimitHingeData__Class>(type_info, "Moon", "IkChainSolver", "LimitHingeData");
        }
        inline app::IkChainSolver_LimitHingeData* create() {
            return il2cpp::create_object<app::IkChainSolver_LimitHingeData>(get_class());
        }
        inline app::IkChainSolver_LimitHingeData__Boxed* box(app::IkChainSolver_LimitHingeData value) {
            return il2cpp::box_value<app::IkChainSolver_LimitHingeData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_LimitHingeData
} // namespace app::classes::types
