#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_TestMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_TestMode__Enum__Class** type_info;
        inline app::UberPoolPerfTest_TestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_TestMode__Enum__Class>(type_info, "", "UberPoolPerfTest", "TestMode");
        }
        inline app::UberPoolPerfTest_TestMode__Enum* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_TestMode__Enum>(get_class());
        }
    } // namespace UberPoolPerfTest_TestMode__Enum
} // namespace app::classes::types
