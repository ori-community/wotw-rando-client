#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserCustomIdInfo {
        inline app::UserCustomIdInfo__Class** type_info = (app::UserCustomIdInfo__Class**)(modloader::win::memory::resolve_rva(0x04741FA8));
        inline app::UserCustomIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserCustomIdInfo__Class>(type_info, "PlayFab.ClientModels", "UserCustomIdInfo");
        }
        inline app::UserCustomIdInfo* create() {
            return il2cpp::create_object<app::UserCustomIdInfo>(get_class());
        }
    } // namespace UserCustomIdInfo
} // namespace app::classes::types
