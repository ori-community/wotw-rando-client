#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonTest {
        inline app::IMoonTest__Class** type_info = (app::IMoonTest__Class**)(modloader::win::memory::resolve_rva(0x0478F268));
        inline app::IMoonTest__Class* get_class() {
            return il2cpp::get_class<app::IMoonTest__Class>(type_info, "", "IMoonTest");
        }
    } // namespace IMoonTest
} // namespace app::classes::types
