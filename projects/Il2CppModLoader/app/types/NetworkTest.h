#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetworkTest__Class** type_info;
        inline app::NetworkTest__Class* get_class() {
            return il2cpp::get_class<app::NetworkTest__Class>(type_info, "", "NetworkTest");
        }
        inline app::NetworkTest* create() {
            return il2cpp::create_object<app::NetworkTest>(get_class());
        }
    } // namespace NetworkTest
} // namespace app::classes::types
