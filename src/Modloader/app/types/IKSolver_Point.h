#pragma once
#include <Modloader/app/structs/IKSolver_Point.h>
#include <Modloader/app/structs/IKSolver_Point__Array.h>
#include <Modloader/app/structs/IKSolver_Point__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolver_Point {
        inline app::IKSolver_Point__Class** type_info() {
            static app::IKSolver_Point__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSolver_Point__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSolver_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_Point__Class>(type_info(), "RootMotion.FinalIK", "IKSolver", "Point");
        }
        inline app::IKSolver_Point* create() {
            return il2cpp::create_object<app::IKSolver_Point>(get_class());
        }
        inline app::IKSolver_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolver_Point__Array>(get_class(), size);
        }
        inline app::IKSolver_Point__Array* create_array(const std::vector<app::IKSolver_Point*>& items) {
            return il2cpp::array_new<app::IKSolver_Point__Array>(get_class(), items);
        }
    } // namespace IKSolver_Point
} // namespace app::classes::types
