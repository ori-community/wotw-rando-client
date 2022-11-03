#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleIKSolver {
        namespace {
            inline app::SimpleIKSolver__Class* type_info_ref = nullptr;
        }
        inline app::SimpleIKSolver__Class** type_info = &type_info_ref;
        inline app::SimpleIKSolver__Class* get_class() {
            return il2cpp::get_class<app::SimpleIKSolver__Class>(type_info, "", "SimpleIKSolver");
        }
        inline app::SimpleIKSolver* create() {
            return il2cpp::create_object<app::SimpleIKSolver>(get_class());
        }
    } // namespace SimpleIKSolver
} // namespace app::classes::types
