#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#include <Modloader/app/structs/UberPoolPerfTest_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Settings {
        inline app::UberPoolPerfTest_Settings__Class** type_info() {
            static app::UberPoolPerfTest_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_Settings__Class**)(modloader::win::memory::resolve_rva(0x04778790));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Settings__Class>(type_info(), "", "UberPoolPerfTest", "Settings");
        }
        inline app::UberPoolPerfTest_Settings* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Settings>(get_class());
        }
    } // namespace UberPoolPerfTest_Settings
} // namespace app::classes::types
