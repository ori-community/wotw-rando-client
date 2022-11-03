#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeUtils {
        inline app::TypeUtils__Class** type_info = (app::TypeUtils__Class**)(modloader::win::memory::resolve_rva(0x047483C0));
        inline app::TypeUtils__Class* get_class() {
            return il2cpp::get_class<app::TypeUtils__Class>(type_info, "System.Dynamic.Utils", "TypeUtils");
        }
        inline app::TypeUtils* create() {
            return il2cpp::create_object<app::TypeUtils>(get_class());
        }
    } // namespace TypeUtils
} // namespace app::classes::types
