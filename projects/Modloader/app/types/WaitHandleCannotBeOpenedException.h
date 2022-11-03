#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitHandleCannotBeOpenedException {
        inline app::WaitHandleCannotBeOpenedException__Class** type_info = (app::WaitHandleCannotBeOpenedException__Class**)(modloader::win::memory::resolve_rva(0x04753F60));
        inline app::WaitHandleCannotBeOpenedException__Class* get_class() {
            return il2cpp::get_class<app::WaitHandleCannotBeOpenedException__Class>(type_info, "System.Threading", "WaitHandleCannotBeOpenedException");
        }
        inline app::WaitHandleCannotBeOpenedException* create() {
            return il2cpp::create_object<app::WaitHandleCannotBeOpenedException>(get_class());
        }
    } // namespace WaitHandleCannotBeOpenedException
} // namespace app::classes::types
