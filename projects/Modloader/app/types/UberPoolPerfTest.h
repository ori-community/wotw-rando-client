#pragma once
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest {
        inline app::UberPoolPerfTest__Class** type_info() {
            static app::UberPoolPerfTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest__Class**)(modloader::win::memory::resolve_rva(0x0471C490));
            }
            return cache;
        }
        inline app::UberPoolPerfTest__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTest__Class>(type_info(), "", "UberPoolPerfTest");
        }
        inline app::UberPoolPerfTest* create() {
            return il2cpp::create_object<app::UberPoolPerfTest>(get_class());
        }
    } // namespace UberPoolPerfTest
} // namespace app::classes::types
