#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Settings_c {
        inline app::UberPoolPerfTest_Settings_c__Class** type_info = (app::UberPoolPerfTest_Settings_c__Class**)(modloader::win::memory::resolve_rva(0x047736D8));
        inline app::UberPoolPerfTest_Settings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Settings_c__Class>(type_info, "", "UberPoolPerfTest+Settings", "<>c");
        }
        inline app::UberPoolPerfTest_Settings_c* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Settings_c>(get_class());
        }
    } // namespace UberPoolPerfTest_Settings_c
} // namespace app::classes::types
