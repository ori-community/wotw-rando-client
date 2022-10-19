#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayList_ReadOnlyList {
        inline app::ArrayList_ReadOnlyList__Class** type_info = (app::ArrayList_ReadOnlyList__Class**)(modloader::win::memory::resolve_rva(0x04731F38));
        inline app::ArrayList_ReadOnlyList__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ReadOnlyList__Class>(type_info, "System.Collections", "ArrayList", "ReadOnlyList");
        }
        inline app::ArrayList_ReadOnlyList* create() {
            return il2cpp::create_object<app::ArrayList_ReadOnlyList>(get_class());
        }
    } // namespace ArrayList_ReadOnlyList
} // namespace app::classes::types
