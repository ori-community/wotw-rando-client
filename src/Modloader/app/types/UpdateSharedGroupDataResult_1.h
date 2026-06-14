#pragma once
#include <Modloader/app/structs/UpdateSharedGroupDataResult_1.h>
#include <Modloader/app/structs/UpdateSharedGroupDataResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult_1 {
        inline app::UpdateSharedGroupDataResult_1__Class** type_info() {
            static app::UpdateSharedGroupDataResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateSharedGroupDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476E918));
            }
            return cache;
        }
        inline app::UpdateSharedGroupDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult_1* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult_1>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult_1
} // namespace app::classes::types
