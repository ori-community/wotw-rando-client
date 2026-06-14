#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_TestMode__Enum.h>
#include <Modloader/app/structs/UberPoolPerfTest_TestMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_TestMode__Enum {
        inline app::UberPoolPerfTest_TestMode__Enum__Class** type_info() {
            static app::UberPoolPerfTest_TestMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_TestMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B168));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_TestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_TestMode__Enum__Class>(type_info(), "", "UberPoolPerfTest", "TestMode");
        }
        inline app::UberPoolPerfTest_TestMode__Enum* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_TestMode__Enum>(get_class());
        }
    } // namespace UberPoolPerfTest_TestMode__Enum
} // namespace app::classes::types
