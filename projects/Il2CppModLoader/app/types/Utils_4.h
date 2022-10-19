#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Utils_4 {
        inline app::Utils_4__Class** type_info = (app::Utils_4__Class**)(modloader::win::memory::resolve_rva(0x04727380));
        inline app::Utils_4__Class* get_class() {
            return il2cpp::get_class<app::Utils_4__Class>(type_info, "Microsoft.Applications.Events", "Utils");
        }
        inline app::Utils_4* create() {
            return il2cpp::create_object<app::Utils_4>(get_class());
        }
    } // namespace Utils_4
} // namespace app::classes::types
