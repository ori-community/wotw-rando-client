#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData__Class.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData__Boxed.h>

namespace app::classes::types {
    namespace IkChainSolver_LimitSpehricalData {
        namespace {
            inline app::IkChainSolver_LimitSpehricalData__Class* type_info_ref = nullptr;
        }
        inline app::IkChainSolver_LimitSpehricalData__Class** type_info = &type_info_ref;
        inline app::IkChainSolver_LimitSpehricalData__Class* get_class() {
            return il2cpp::get_nested_class<app::IkChainSolver_LimitSpehricalData__Class>(type_info, "Moon", "IkChainSolver", "LimitSpehricalData");
        }
        inline app::IkChainSolver_LimitSpehricalData* create() {
            return il2cpp::create_object<app::IkChainSolver_LimitSpehricalData>(get_class());
        }
        inline app::IkChainSolver_LimitSpehricalData__Boxed* box(app::IkChainSolver_LimitSpehricalData value) {
            return il2cpp::box_value<app::IkChainSolver_LimitSpehricalData__Boxed>(get_class(), value);
        }
    } // namespace IkChainSolver_LimitSpehricalData
} // namespace app::classes::types
