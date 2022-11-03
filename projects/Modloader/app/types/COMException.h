#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace COMException {
        inline app::COMException__Class** type_info = (app::COMException__Class**)(modloader::win::memory::resolve_rva(0x04769FA0));
        inline app::COMException__Class* get_class() {
            return il2cpp::get_class<app::COMException__Class>(type_info, "System.Runtime.InteropServices", "COMException");
        }
        inline app::COMException* create() {
            return il2cpp::create_object<app::COMException>(get_class());
        }
    } // namespace COMException
} // namespace app::classes::types
