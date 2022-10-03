#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Settings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_Settings__Class** type_info;
        inline app::UberPoolPerfTest_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Settings__Class>(type_info, "", "UberPoolPerfTest", "Settings");
        }
        inline app::UberPoolPerfTest_Settings* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Settings>(get_class());
        }
    } // namespace UberPoolPerfTest_Settings
} // namespace app::classes::types
