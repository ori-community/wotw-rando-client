#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerTagsResult_1 {
        inline app::GetPlayerTagsResult_1__Class** type_info = (app::GetPlayerTagsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04714CB0));
        inline app::GetPlayerTagsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerTagsResult");
        }
        inline app::GetPlayerTagsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerTagsResult_1>(get_class());
        }
    } // namespace GetPlayerTagsResult_1
} // namespace app::classes::types
