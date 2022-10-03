#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_c__Class** type_info;
        inline app::UberPoolPerfTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_c__Class>(type_info, "", "UberPoolPerfTest", "<>c");
        }
        inline app::UberPoolPerfTest_c* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_c>(get_class());
        }
    } // namespace UberPoolPerfTest_c
} // namespace app::classes::types
