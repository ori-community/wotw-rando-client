#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupCollection {
        inline app::GroupCollection__Class** type_info = (app::GroupCollection__Class**)(modloader::win::memory::resolve_rva(0x0476DF78));
        inline app::GroupCollection__Class* get_class() {
            return il2cpp::get_class<app::GroupCollection__Class>(type_info, "System.Text.RegularExpressions", "GroupCollection");
        }
        inline app::GroupCollection* create() {
            return il2cpp::create_object<app::GroupCollection>(get_class());
        }
    } // namespace GroupCollection
} // namespace app::classes::types
