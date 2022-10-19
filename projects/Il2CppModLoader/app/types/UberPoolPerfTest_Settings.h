#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Settings {
        inline app::UberPoolPerfTest_Settings__Class** type_info = (app::UberPoolPerfTest_Settings__Class**)(modloader::win::memory::resolve_rva(0x04778790));
        inline app::UberPoolPerfTest_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Settings__Class>(type_info, "", "UberPoolPerfTest", "Settings");
        }
        inline app::UberPoolPerfTest_Settings* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Settings>(get_class());
        }
    } // namespace UberPoolPerfTest_Settings
} // namespace app::classes::types
