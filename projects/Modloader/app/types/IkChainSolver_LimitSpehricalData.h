#pragma once
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData__Boxed.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver_LimitSpehricalData {
        inline app::IkChainSolver_LimitSpehricalData__Class** type_info() {
            static app::IkChainSolver_LimitSpehricalData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IkChainSolver_LimitSpehricalData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IkChainSolver_LimitSpehricalData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_LimitSpehricalData__Class>(type_info(), "Moon", "IkChainSolver", "LimitSpehricalData");
        }
        inline app::IkChainSolver_LimitSpehricalData* create() {
            return il2cpp::create_object<app::IkChainSolver_LimitSpehricalData>(get_class());
        }
        inline app::IkChainSolver_LimitSpehricalData__Boxed* box(app::IkChainSolver_LimitSpehricalData value) {
            return il2cpp::box_value<app::IkChainSolver_LimitSpehricalData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_LimitSpehricalData
} // namespace app::classes::types
