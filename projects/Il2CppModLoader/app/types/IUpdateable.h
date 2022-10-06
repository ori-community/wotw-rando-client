#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUpdateable__Class** type_info;
        inline app::IUpdateable__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable__Class>(type_info, "SystemIntegration", "IUpdateable");
        }
        inline app::IUpdateable__Array* create_array(int size) {
            return il2cpp::array_new<app::IUpdateable__Array>(get_class(), size);
        }
        inline app::IUpdateable__Array* create_array(const std::vector<app::IUpdateable*>& items) {
            return il2cpp::array_new<app::IUpdateable__Array>(get_class(), items);
        }
    } // namespace IUpdateable
} // namespace app::classes::types
