#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_c.h>
#include <Modloader/app/structs/UberPoolPerfTest_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_c {
        inline app::UberPoolPerfTest_c__Class** type_info() {
            static app::UberPoolPerfTest_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_c__Class**)(modloader::win::memory::resolve_rva(0x04762CC8));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_c__Class>(type_info(), "", "UberPoolPerfTest", "<>c");
        }
        inline app::UberPoolPerfTest_c* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_c>(get_class());
        }
    } // namespace UberPoolPerfTest_c
} // namespace app::classes::types
