#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestWindowsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestWindowsController__Class** type_info;
        inline app::TestWindowsController__Class* get_class() {
            return il2cpp::get_class<app::TestWindowsController__Class>(type_info, "", "TestWindowsController");
        }
        inline app::TestWindowsController* create() {
            return il2cpp::create_object<app::TestWindowsController>(get_class());
        }
    } // namespace TestWindowsController
} // namespace app::classes::types
