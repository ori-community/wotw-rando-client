#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array__Class.h>
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array.h>

namespace app::classes::types {
    namespace SimpleIKSolver_JointEntity__Array {
        namespace {
            inline app::SimpleIKSolver_JointEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::SimpleIKSolver_JointEntity__Array__Class** type_info = &type_info_ref;
        inline app::SimpleIKSolver_JointEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleIKSolver_JointEntity__Array__Class>(type_info, "", "SimpleIKSolver+JointEntity[]");
        }
        inline app::SimpleIKSolver_JointEntity__Array* create() {
            return il2cpp::create_object<app::SimpleIKSolver_JointEntity__Array>(get_class());
        }
    } // namespace SimpleIKSolver_JointEntity__Array
} // namespace app::classes::types
