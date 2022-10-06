#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugMenuItem__Class** type_info;
        inline app::IDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuItem__Class>(type_info, "", "IDebugMenuItem");
        }
        inline app::IDebugMenuItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuItem__Array>(get_class(), size);
        }
        inline app::IDebugMenuItem__Array* create_array(const std::vector<app::IDebugMenuItem*>& items) {
            return il2cpp::array_new<app::IDebugMenuItem__Array>(get_class(), items);
        }
    } // namespace IDebugMenuItem
} // namespace app::classes::types
