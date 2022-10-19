#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrustumEnabled {
        inline app::IFrustumEnabled__Class** type_info = (app::IFrustumEnabled__Class**)(modloader::win::memory::resolve_rva(0x0472BBB0));
        inline app::IFrustumEnabled__Class* get_class() {
            return il2cpp::get_class<app::IFrustumEnabled__Class>(type_info, "Game", "IFrustumEnabled");
        }
        inline app::IFrustumEnabled__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumEnabled__Array>(get_class(), size);
        }
        inline app::IFrustumEnabled__Array* create_array(const std::vector<app::IFrustumEnabled*>& items) {
            return il2cpp::array_new<app::IFrustumEnabled__Array>(get_class(), items);
        }
    } // namespace IFrustumEnabled
} // namespace app::classes::types
