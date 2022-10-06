#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EtwSession {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EtwSession__Class** type_info;
        inline app::EtwSession__Class* get_class() {
            return il2cpp::get_class<app::EtwSession__Class>(type_info, "System.Diagnostics.Tracing", "EtwSession");
        }
        inline app::EtwSession* create() {
            return il2cpp::create_object<app::EtwSession>(get_class());
        }
        inline app::EtwSession__Array* create_array(int size) {
            return il2cpp::array_new<app::EtwSession__Array>(get_class(), size);
        }
        inline app::EtwSession__Array* create_array(const std::vector<app::EtwSession*>& items) {
            return il2cpp::array_new<app::EtwSession__Array>(get_class(), items);
        }
    } // namespace EtwSession
} // namespace app::classes::types
