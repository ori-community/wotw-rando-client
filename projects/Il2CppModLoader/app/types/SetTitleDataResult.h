#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetTitleDataResult {
        inline app::SetTitleDataResult__Class** type_info = (app::SetTitleDataResult__Class**)(modloader::win::memory::resolve_rva(0x04713660));
        inline app::SetTitleDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetTitleDataResult__Class>(type_info, "PlayFab.ServerModels", "SetTitleDataResult");
        }
        inline app::SetTitleDataResult* create() {
            return il2cpp::create_object<app::SetTitleDataResult>(get_class());
        }
    } // namespace SetTitleDataResult
} // namespace app::classes::types
