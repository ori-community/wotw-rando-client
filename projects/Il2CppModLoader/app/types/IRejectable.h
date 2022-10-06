#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRejectable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRejectable__Class** type_info;
        inline app::IRejectable__Class* get_class() {
            return il2cpp::get_class<app::IRejectable__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IRejectable");
        }
        inline app::IRejectable__Array* create_array(int size) {
            return il2cpp::array_new<app::IRejectable__Array>(get_class(), size);
        }
        inline app::IRejectable__Array* create_array(const std::vector<app::IRejectable*>& items) {
            return il2cpp::array_new<app::IRejectable__Array>(get_class(), items);
        }
    } // namespace IRejectable
} // namespace app::classes::types
