#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_LogCatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_LogCatcher__Class** type_info;
        inline app::UberPoolPerfTest_LogCatcher__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_LogCatcher__Class>(type_info, "", "UberPoolPerfTest", "LogCatcher");
        }
        inline app::UberPoolPerfTest_LogCatcher* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_LogCatcher>(get_class());
        }
    } // namespace UberPoolPerfTest_LogCatcher
} // namespace app::classes::types
