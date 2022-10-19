#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeBansResult {
        inline app::RevokeBansResult__Class** type_info = (app::RevokeBansResult__Class**)(modloader::win::memory::resolve_rva(0x04785170));
        inline app::RevokeBansResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansResult__Class>(type_info, "PlayFab.ServerModels", "RevokeBansResult");
        }
        inline app::RevokeBansResult* create() {
            return il2cpp::create_object<app::RevokeBansResult>(get_class());
        }
    } // namespace RevokeBansResult
} // namespace app::classes::types
