#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetworkTest_c {
        inline app::NetworkTest_c__Class** type_info = (app::NetworkTest_c__Class**)(modloader::win::memory::resolve_rva(0x047120B8));
        inline app::NetworkTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NetworkTest_c__Class>(type_info, "", "NetworkTest", "<>c");
        }
        inline app::NetworkTest_c* create() {
            return il2cpp::create_object<app::NetworkTest_c>(get_class());
        }
    } // namespace NetworkTest_c
} // namespace app::classes::types
