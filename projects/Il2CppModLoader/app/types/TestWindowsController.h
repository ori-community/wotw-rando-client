#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestWindowsController {
        inline app::TestWindowsController__Class** type_info = (app::TestWindowsController__Class**)(modloader::win::memory::resolve_rva(0x0478A780));
        inline app::TestWindowsController__Class* get_class() {
            return il2cpp::get_class<app::TestWindowsController__Class>(type_info, "", "TestWindowsController");
        }
        inline app::TestWindowsController* create() {
            return il2cpp::create_object<app::TestWindowsController>(get_class());
        }
    } // namespace TestWindowsController
} // namespace app::classes::types
