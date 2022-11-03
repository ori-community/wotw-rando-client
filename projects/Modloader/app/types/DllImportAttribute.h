#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DllImportAttribute {
        inline app::DllImportAttribute__Class** type_info = (app::DllImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x04757528));
        inline app::DllImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::DllImportAttribute__Class>(type_info, "System.Runtime.InteropServices", "DllImportAttribute");
        }
        inline app::DllImportAttribute* create() {
            return il2cpp::create_object<app::DllImportAttribute>(get_class());
        }
    } // namespace DllImportAttribute
} // namespace app::classes::types
