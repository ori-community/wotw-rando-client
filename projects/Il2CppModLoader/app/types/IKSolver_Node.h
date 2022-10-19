#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolver_Node {
        inline app::IKSolver_Node__Class** type_info = (app::IKSolver_Node__Class**)(modloader::win::memory::resolve_rva(0x04749B30));
        inline app::IKSolver_Node__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_Node__Class>(type_info, "RootMotion.FinalIK", "IKSolver", "Node");
        }
        inline app::IKSolver_Node* create() {
            return il2cpp::create_object<app::IKSolver_Node>(get_class());
        }
        inline app::IKSolver_Node__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolver_Node__Array>(get_class(), size);
        }
        inline app::IKSolver_Node__Array* create_array(const std::vector<app::IKSolver_Node*>& items) {
            return il2cpp::array_new<app::IKSolver_Node__Array>(get_class(), items);
        }
    } // namespace IKSolver_Node
} // namespace app::classes::types
