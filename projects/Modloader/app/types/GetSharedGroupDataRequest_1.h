#pragma once
#include <Modloader/app/structs/GetSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataRequest_1 {
        inline app::GetSharedGroupDataRequest_1__Class** type_info() {
            static app::GetSharedGroupDataRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetSharedGroupDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04790230));
            }
            return cache;
        }
        inline app::GetSharedGroupDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetSharedGroupDataRequest");
        }
        inline app::GetSharedGroupDataRequest_1* create() {
            return il2cpp::create_object<app::GetSharedGroupDataRequest_1>(get_class());
        }
    } // namespace GetSharedGroupDataRequest_1
} // namespace app::classes::types
