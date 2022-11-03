#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerProfileResult_1 {
        inline app::GetPlayerProfileResult_1__Class** type_info = (app::GetPlayerProfileResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473DEF0));
        inline app::GetPlayerProfileResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerProfileResult");
        }
        inline app::GetPlayerProfileResult_1* create() {
            return il2cpp::create_object<app::GetPlayerProfileResult_1>(get_class());
        }
    } // namespace GetPlayerProfileResult_1
} // namespace app::classes::types
