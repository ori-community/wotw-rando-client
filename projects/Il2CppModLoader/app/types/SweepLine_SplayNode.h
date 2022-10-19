#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SweepLine_SplayNode {
        inline app::SweepLine_SplayNode__Class** type_info = (app::SweepLine_SplayNode__Class**)(modloader::win::memory::resolve_rva(0x047121C0));
        inline app::SweepLine_SplayNode__Class* get_class() {
            return il2cpp::get_nested_class<app::SweepLine_SplayNode__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine", "SplayNode");
        }
        inline app::SweepLine_SplayNode* create() {
            return il2cpp::create_object<app::SweepLine_SplayNode>(get_class());
        }
        inline app::SweepLine_SplayNode__Array* create_array(int size) {
            return il2cpp::array_new<app::SweepLine_SplayNode__Array>(get_class(), size);
        }
        inline app::SweepLine_SplayNode__Array* create_array(const std::vector<app::SweepLine_SplayNode*>& items) {
            return il2cpp::array_new<app::SweepLine_SplayNode__Array>(get_class(), items);
        }
    } // namespace SweepLine_SplayNode
} // namespace app::classes::types
