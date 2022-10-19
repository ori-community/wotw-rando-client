#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserInventoryResult_1 {
        inline app::GetUserInventoryResult_1__Class** type_info = (app::GetUserInventoryResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476B960));
        inline app::GetUserInventoryResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryResult_1__Class>(type_info, "PlayFab.ServerModels", "GetUserInventoryResult");
        }
        inline app::GetUserInventoryResult_1* create() {
            return il2cpp::create_object<app::GetUserInventoryResult_1>(get_class());
        }
    } // namespace GetUserInventoryResult_1
} // namespace app::classes::types
