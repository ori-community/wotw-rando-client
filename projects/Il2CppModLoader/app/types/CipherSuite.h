#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CipherSuite {
        inline app::CipherSuite__Class** type_info = (app::CipherSuite__Class**)(modloader::win::memory::resolve_rva(0x04762B60));
        inline app::CipherSuite__Class* get_class() {
            return il2cpp::get_class<app::CipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "CipherSuite");
        }
        inline app::CipherSuite* create() {
            return il2cpp::create_object<app::CipherSuite>(get_class());
        }
        inline app::CipherSuite__Array* create_array(int size) {
            return il2cpp::array_new<app::CipherSuite__Array>(get_class(), size);
        }
        inline app::CipherSuite__Array* create_array(const std::vector<app::CipherSuite*>& items) {
            return il2cpp::array_new<app::CipherSuite__Array>(get_class(), items);
        }
    } // namespace CipherSuite
} // namespace app::classes::types
