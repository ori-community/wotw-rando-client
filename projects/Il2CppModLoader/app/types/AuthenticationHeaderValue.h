#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationHeaderValue {
        inline app::AuthenticationHeaderValue__Class** type_info = (app::AuthenticationHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0475D010));
        inline app::AuthenticationHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationHeaderValue__Class>(type_info, "System.Net.Http.Headers", "AuthenticationHeaderValue");
        }
        inline app::AuthenticationHeaderValue* create() {
            return il2cpp::create_object<app::AuthenticationHeaderValue>(get_class());
        }
        inline app::AuthenticationHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::AuthenticationHeaderValue__Array>(get_class(), size);
        }
        inline app::AuthenticationHeaderValue__Array* create_array(const std::vector<app::AuthenticationHeaderValue*>& items) {
            return il2cpp::array_new<app::AuthenticationHeaderValue__Array>(get_class(), items);
        }
    } // namespace AuthenticationHeaderValue
} // namespace app::classes::types
