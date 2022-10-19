#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetworkTest {
        inline app::NetworkTest__Class** type_info = (app::NetworkTest__Class**)(modloader::win::memory::resolve_rva(0x04704180));
        inline app::NetworkTest__Class* get_class() {
            return il2cpp::get_class<app::NetworkTest__Class>(type_info, "", "NetworkTest");
        }
        inline app::NetworkTest* create() {
            return il2cpp::create_object<app::NetworkTest>(get_class());
        }
    } // namespace NetworkTest
} // namespace app::classes::types
