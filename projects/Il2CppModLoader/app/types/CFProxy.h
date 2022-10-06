#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFProxy__Class** type_info;
        inline app::CFProxy__Class* get_class() {
            return il2cpp::get_class<app::CFProxy__Class>(type_info, "Mono.Net", "CFProxy");
        }
        inline app::CFProxy* create() {
            return il2cpp::create_object<app::CFProxy>(get_class());
        }
        inline app::CFProxy__Array* create_array(int size) {
            return il2cpp::array_new<app::CFProxy__Array>(get_class(), size);
        }
        inline app::CFProxy__Array* create_array(const std::vector<app::CFProxy*>& items) {
            return il2cpp::array_new<app::CFProxy__Array>(get_class(), items);
        }
    } // namespace CFProxy
} // namespace app::classes::types
