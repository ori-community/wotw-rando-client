#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDictionary {
        inline app::IDictionary__Class** type_info = (app::IDictionary__Class**)(modloader::win::memory::resolve_rva(0x0476BAD0));
        inline app::IDictionary__Class* get_class() {
            return il2cpp::get_class<app::IDictionary__Class>(type_info, "System.Collections", "IDictionary");
        }
    } // namespace IDictionary
} // namespace app::classes::types
