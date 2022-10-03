#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest__Class** type_info;
        inline app::UberPoolPerfTest__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTest__Class>(type_info, "", "UberPoolPerfTest");
        }
        inline app::UberPoolPerfTest* create() {
            return il2cpp::create_object<app::UberPoolPerfTest>(get_class());
        }
    } // namespace UberPoolPerfTest
} // namespace app::classes::types
