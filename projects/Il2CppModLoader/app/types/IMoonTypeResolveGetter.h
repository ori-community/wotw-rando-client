#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonTypeResolveGetter {
        inline app::IMoonTypeResolveGetter__Class** type_info = (app::IMoonTypeResolveGetter__Class**)(modloader::win::memory::resolve_rva(0x0478D060));
        inline app::IMoonTypeResolveGetter__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolveGetter__Class>(type_info, "Moon", "IMoonTypeResolveGetter");
        }
    } // namespace IMoonTypeResolveGetter
} // namespace app::classes::types
