#pragma once
#include <Modloader/app/structs/IkChainSolver_RotationLimitData.h>
#include <Modloader/app/structs/IkChainSolver_RotationLimitData__Boxed.h>
#include <Modloader/app/structs/IkChainSolver_RotationLimitData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_RotationLimitData {
        inline app::IkChainSolver_RotationLimitData__Class** type_info() {
            static app::IkChainSolver_RotationLimitData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IkChainSolver_RotationLimitData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IkChainSolver_RotationLimitData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_RotationLimitData__Class>(type_info(), "Moon", "IkChainSolver", "RotationLimitData");
        }
        inline app::IkChainSolver_RotationLimitData* create() {
            return il2cpp::create_object<app::IkChainSolver_RotationLimitData>(get_class());
        }
        inline app::IkChainSolver_RotationLimitData__Boxed* box(app::IkChainSolver_RotationLimitData value) {
            return il2cpp::box_value<app::IkChainSolver_RotationLimitData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_RotationLimitData
} // namespace app::classes::types
