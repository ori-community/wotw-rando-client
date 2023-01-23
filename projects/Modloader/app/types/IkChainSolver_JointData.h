#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IkChainSolver_JointData__Class.h>
#include <Modloader/app/structs/IkChainSolver_JointData.h>
#include <Modloader/app/structs/IkChainSolver_JointData__Boxed.h>
#include <Modloader/app/structs/IkChainSolver_JointData__Array.h>

namespace app::classes::types {
    namespace IkChainSolver_JointData {
        namespace {
            inline app::IkChainSolver_JointData__Class* type_info_ref = nullptr;
        }
        inline app::IkChainSolver_JointData__Class** type_info = &type_info_ref;
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
        inline app::IkChainSolver_JointData__Array* create_array(const std::vector<app::IkChainSolver_JointData>& items) {
            return il2cpp::array_new<app::IkChainSolver_JointData__Array>(get_class(), items);
        }
    } // namespace IkChainSolver_JointData
} // namespace app::classes::types
