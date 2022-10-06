#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cookie_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Cookie_1__Class** type_info;
        inline app::Cookie_1__Class* get_class() {
            return il2cpp::get_class<app::Cookie_1__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Cookie");
        }
        inline app::Cookie_1* create() {
            return il2cpp::create_object<app::Cookie_1>(get_class());
        }
        inline app::Cookie_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Cookie_1__Array>(get_class(), size);
        }
        inline app::Cookie_1__Array* create_array(const std::vector<app::Cookie_1*>& items) {
            return il2cpp::array_new<app::Cookie_1__Array>(get_class(), items);
        }
    } // namespace Cookie_1
} // namespace app::classes::types
