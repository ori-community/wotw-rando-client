#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFDictionary {
        inline app::CFDictionary__Class** type_info = (app::CFDictionary__Class**)(modloader::win::memory::resolve_rva(0x04741D80));
        inline app::CFDictionary__Class* get_class() {
            return il2cpp::get_class<app::CFDictionary__Class>(type_info, "Mono.Net", "CFDictionary");
        }
        inline app::CFDictionary* create() {
            return il2cpp::create_object<app::CFDictionary>(get_class());
        }
    } // namespace CFDictionary
} // namespace app::classes::types
