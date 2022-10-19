#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_c_DisplayClass38_0 {
        inline app::UberPoolPerfTest_c_DisplayClass38_0__Class** type_info = (app::UberPoolPerfTest_c_DisplayClass38_0__Class**)(modloader::win::memory::resolve_rva(0x047693E8));
        inline app::UberPoolPerfTest_c_DisplayClass38_0__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_c_DisplayClass38_0__Class>(type_info, "", "UberPoolPerfTest", "<>c__DisplayClass38_0");
        }
        inline app::UberPoolPerfTest_c_DisplayClass38_0* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_c_DisplayClass38_0>(get_class());
        }
    } // namespace UberPoolPerfTest_c_DisplayClass38_0
} // namespace app::classes::types
