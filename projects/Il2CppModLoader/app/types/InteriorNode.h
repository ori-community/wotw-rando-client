#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteriorNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteriorNode__Class** type_info;
        inline app::InteriorNode__Class* get_class() {
            return il2cpp::get_class<app::InteriorNode__Class>(type_info, "System.Xml.Schema", "InteriorNode");
        }
        inline app::InteriorNode* create() {
            return il2cpp::create_object<app::InteriorNode>(get_class());
        }
        inline app::InteriorNode__Array* create_array(int size) {
            return il2cpp::array_new<app::InteriorNode__Array>(get_class(), size);
        }
        inline app::InteriorNode__Array* create_array(const std::vector<app::InteriorNode*>& items) {
            return il2cpp::array_new<app::InteriorNode__Array>(get_class(), items);
        }
    } // namespace InteriorNode
} // namespace app::classes::types
