#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisplayNameAttribute {
        inline app::DisplayNameAttribute__Class** type_info = (app::DisplayNameAttribute__Class**)(modloader::win::memory::resolve_rva(0x0478EF88));
        inline app::DisplayNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::DisplayNameAttribute__Class>(type_info, "System.ComponentModel", "DisplayNameAttribute");
        }
        inline app::DisplayNameAttribute* create() {
            return il2cpp::create_object<app::DisplayNameAttribute>(get_class());
        }
    } // namespace DisplayNameAttribute
} // namespace app::classes::types
