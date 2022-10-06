#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnectionGroup__Class** type_info;
        inline app::WebConnectionGroup__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup__Class>(type_info, "System.Net", "WebConnectionGroup");
        }
        inline app::WebConnectionGroup* create() {
            return il2cpp::create_object<app::WebConnectionGroup>(get_class());
        }
        inline app::WebConnectionGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), size);
        }
        inline app::WebConnectionGroup__Array* create_array(const std::vector<app::WebConnectionGroup*>& items) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), items);
        }
    } // namespace WebConnectionGroup
} // namespace app::classes::types
