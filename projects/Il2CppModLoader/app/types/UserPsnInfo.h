#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserPsnInfo {
        inline app::UserPsnInfo__Class** type_info = (app::UserPsnInfo__Class**)(modloader::win::memory::resolve_rva(0x04762760));
        inline app::UserPsnInfo__Class* get_class() {
            return il2cpp::get_class<app::UserPsnInfo__Class>(type_info, "PlayFab.ClientModels", "UserPsnInfo");
        }
        inline app::UserPsnInfo* create() {
            return il2cpp::create_object<app::UserPsnInfo>(get_class());
        }
    } // namespace UserPsnInfo
} // namespace app::classes::types
