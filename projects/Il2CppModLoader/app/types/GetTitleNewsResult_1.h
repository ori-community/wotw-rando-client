#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleNewsResult_1 {
        inline app::GetTitleNewsResult_1__Class** type_info = (app::GetTitleNewsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0470AB40));
        inline app::GetTitleNewsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetTitleNewsResult");
        }
        inline app::GetTitleNewsResult_1* create() {
            return il2cpp::create_object<app::GetTitleNewsResult_1>(get_class());
        }
    } // namespace GetTitleNewsResult_1
} // namespace app::classes::types
