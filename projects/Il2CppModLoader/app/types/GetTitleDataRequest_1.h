#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleDataRequest_1 {
        inline app::GetTitleDataRequest_1__Class** type_info = (app::GetTitleDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0475F6D8));
        inline app::GetTitleDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest_1* create() {
            return il2cpp::create_object<app::GetTitleDataRequest_1>(get_class());
        }
    } // namespace GetTitleDataRequest_1
} // namespace app::classes::types
