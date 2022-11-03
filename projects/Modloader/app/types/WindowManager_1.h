#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowManager_1 {
        inline app::WindowManager_1__Class** type_info = (app::WindowManager_1__Class**)(modloader::win::memory::resolve_rva(0x04770030));
        inline app::WindowManager_1__Class* get_class() {
            return il2cpp::get_class<app::WindowManager_1__Class>(type_info, "Moon.UI", "WindowManager");
        }
        inline app::WindowManager_1* create() {
            return il2cpp::create_object<app::WindowManager_1>(get_class());
        }
    } // namespace WindowManager_1
} // namespace app::classes::types
