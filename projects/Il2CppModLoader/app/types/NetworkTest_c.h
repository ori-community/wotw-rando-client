#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkTest_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetworkTest_c__Class** type_info;
        inline app::NetworkTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NetworkTest_c__Class>(type_info, "", "NetworkTest", "<>c");
        }
        inline app::NetworkTest_c* create() {
            return il2cpp::create_object<app::NetworkTest_c>(get_class());
        }
    } // namespace NetworkTest_c
} // namespace app::classes::types
