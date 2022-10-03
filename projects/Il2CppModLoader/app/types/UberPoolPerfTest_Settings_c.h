#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Settings_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_Settings_c__Class** type_info;
        inline app::UberPoolPerfTest_Settings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Settings_c__Class>(type_info, "", "UberPoolPerfTest+Settings", "<>c");
        }
        inline app::UberPoolPerfTest_Settings_c* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Settings_c>(get_class());
        }
    } // namespace UberPoolPerfTest_Settings_c
} // namespace app::classes::types
