#pragma once
#include <Modloader/app/structs/UpdateSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/UpdateSharedGroupDataRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataRequest_1 {
        inline app::UpdateSharedGroupDataRequest_1__Class** type_info() {
            static app::UpdateSharedGroupDataRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateSharedGroupDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04724DB8));
            }
            return cache;
        }
        inline app::UpdateSharedGroupDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataRequest_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateSharedGroupDataRequest");
        }
        inline app::UpdateSharedGroupDataRequest_1* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataRequest_1>(get_class());
        }
    } // namespace UpdateSharedGroupDataRequest_1
} // namespace app::classes::types
