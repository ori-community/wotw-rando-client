#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountResult_1 {
        inline app::UnlinkXboxAccountResult_1__Class** type_info = (app::UnlinkXboxAccountResult_1__Class**)(modloader::win::memory::resolve_rva(0x047188F8));
        inline app::UnlinkXboxAccountResult_1__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountResult_1__Class>(type_info, "PlayFab.ServerModels", "UnlinkXboxAccountResult");
        }
        inline app::UnlinkXboxAccountResult_1* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountResult_1>(get_class());
        }
    } // namespace UnlinkXboxAccountResult_1
} // namespace app::classes::types
