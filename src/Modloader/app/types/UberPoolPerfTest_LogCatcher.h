#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher.h>
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_LogCatcher {
        inline app::UberPoolPerfTest_LogCatcher__Class** type_info() {
            static app::UberPoolPerfTest_LogCatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_LogCatcher__Class**)(modloader::win::memory::resolve_rva(0x04739658));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_LogCatcher__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_LogCatcher__Class>(type_info(), "", "UberPoolPerfTest", "LogCatcher");
        }
        inline app::UberPoolPerfTest_LogCatcher* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_LogCatcher>(get_class());
        }
    } // namespace UberPoolPerfTest_LogCatcher
} // namespace app::classes::types
