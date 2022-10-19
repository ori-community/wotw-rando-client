#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateBansResult {
        inline app::UpdateBansResult__Class** type_info = (app::UpdateBansResult__Class**)(modloader::win::memory::resolve_rva(0x04791138));
        inline app::UpdateBansResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateBansResult__Class>(type_info, "PlayFab.ServerModels", "UpdateBansResult");
        }
        inline app::UpdateBansResult* create() {
            return il2cpp::create_object<app::UpdateBansResult>(get_class());
        }
    } // namespace UpdateBansResult
} // namespace app::classes::types
