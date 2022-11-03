#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetSharedGroupDataResult_1 {
        inline app::GetSharedGroupDataResult_1__Class** type_info = (app::GetSharedGroupDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04790598));
        inline app::GetSharedGroupDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetSharedGroupDataResult");
        }
        inline app::GetSharedGroupDataResult_1* create() {
            return il2cpp::create_object<app::GetSharedGroupDataResult_1>(get_class());
        }
    } // namespace GetSharedGroupDataResult_1
} // namespace app::classes::types
