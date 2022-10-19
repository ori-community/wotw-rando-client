#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchCollection {
        inline app::MatchCollection__Class** type_info = (app::MatchCollection__Class**)(modloader::win::memory::resolve_rva(0x0475B8D0));
        inline app::MatchCollection__Class* get_class() {
            return il2cpp::get_class<app::MatchCollection__Class>(type_info, "System.Text.RegularExpressions", "MatchCollection");
        }
        inline app::MatchCollection* create() {
            return il2cpp::create_object<app::MatchCollection>(get_class());
        }
    } // namespace MatchCollection
} // namespace app::classes::types
