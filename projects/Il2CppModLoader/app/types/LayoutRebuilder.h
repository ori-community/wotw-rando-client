#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayoutRebuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayoutRebuilder__Class** type_info;
        inline app::LayoutRebuilder__Class* get_class() {
            return il2cpp::get_class<app::LayoutRebuilder__Class>(type_info, "UnityEngine.UI", "LayoutRebuilder");
        }
        inline app::LayoutRebuilder* create() {
            return il2cpp::create_object<app::LayoutRebuilder>(get_class());
        }
        inline app::LayoutRebuilder__Array* create_array(int size) {
            return il2cpp::array_new<app::LayoutRebuilder__Array>(get_class(), size);
        }
        inline app::LayoutRebuilder__Array* create_array(const std::vector<app::LayoutRebuilder*>& items) {
            return il2cpp::array_new<app::LayoutRebuilder__Array>(get_class(), items);
        }
    } // namespace LayoutRebuilder
} // namespace app::classes::types
