#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameFolders {
        inline app::GameFolders__Class** type_info = (app::GameFolders__Class**)(modloader::win::memory::resolve_rva(0x0474BB48));
        inline app::GameFolders__Class* get_class() {
            return il2cpp::get_class<app::GameFolders__Class>(type_info, "Moon", "GameFolders");
        }
        inline app::GameFolders* create() {
            return il2cpp::create_object<app::GameFolders>(get_class());
        }
    } // namespace GameFolders
} // namespace app::classes::types
