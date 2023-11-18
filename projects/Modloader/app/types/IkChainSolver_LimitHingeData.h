#pragma once
#include <Modloader/app/structs/IkChainSolver_LimitHingeData.h>
#include <Modloader/app/structs/IkChainSolver_LimitHingeData__Boxed.h>
#include <Modloader/app/structs/IkChainSolver_LimitHingeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_LimitHingeData {
        inline app::IkChainSolver_LimitHingeData__Class** type_info() {
            static app::IkChainSolver_LimitHingeData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IkChainSolver_LimitHingeData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IkChainSolver_LimitHingeData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_LimitHingeData__Class>(type_info(), "Moon", "IkChainSolver", "LimitHingeData");
        }
        inline app::IkChainSolver_LimitHingeData* create() {
            return il2cpp::create_object<app::IkChainSolver_LimitHingeData>(get_class());
        }
        inline app::IkChainSolver_LimitHingeData__Boxed* box(app::IkChainSolver_LimitHingeData value) {
            return il2cpp::box_value<app::IkChainSolver_LimitHingeData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_LimitHingeData
} // namespace app::classes::types
