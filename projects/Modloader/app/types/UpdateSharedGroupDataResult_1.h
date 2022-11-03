#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult_1 {
        inline app::UpdateSharedGroupDataResult_1__Class** type_info = (app::UpdateSharedGroupDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476E918));
        inline app::UpdateSharedGroupDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult_1__Class>(type_info, "PlayFab.ServerModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult_1* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult_1>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult_1
} // namespace app::classes::types
