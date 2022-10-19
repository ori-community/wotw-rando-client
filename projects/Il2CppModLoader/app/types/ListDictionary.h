#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListDictionary {
        inline app::ListDictionary__Class** type_info = (app::ListDictionary__Class**)(modloader::win::memory::resolve_rva(0x0477E478));
        inline app::ListDictionary__Class* get_class() {
            return il2cpp::get_class<app::ListDictionary__Class>(type_info, "System.Collections.Specialized", "ListDictionary");
        }
        inline app::ListDictionary* create() {
            return il2cpp::create_object<app::ListDictionary>(get_class());
        }
    } // namespace ListDictionary
} // namespace app::classes::types
