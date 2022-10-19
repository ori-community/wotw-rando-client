#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverFullBody {
        namespace {
            inline app::IKSolverFullBody__Class* type_info_ref = nullptr;
        }
        inline app::IKSolverFullBody__Class** type_info = &type_info_ref;
        inline app::IKSolverFullBody__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFullBody__Class>(type_info, "RootMotion.FinalIK", "IKSolverFullBody");
        }
        inline app::IKSolverFullBody* create() {
            return il2cpp::create_object<app::IKSolverFullBody>(get_class());
        }
    } // namespace IKSolverFullBody
} // namespace app::classes::types
