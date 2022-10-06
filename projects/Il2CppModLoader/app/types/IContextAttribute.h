#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContextAttribute__Class** type_info;
        inline app::IContextAttribute__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextAttribute");
        }
        inline app::IContextAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::IContextAttribute__Array>(get_class(), size);
        }
        inline app::IContextAttribute__Array* create_array(const std::vector<app::IContextAttribute*>& items) {
            return il2cpp::array_new<app::IContextAttribute__Array>(get_class(), items);
        }
    } // namespace IContextAttribute
} // namespace app::classes::types
