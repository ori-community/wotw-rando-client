#pragma once
#include <Modloader/app/structs/GetTitleDataRequest_1.h>
#include <Modloader/app/structs/GetTitleDataRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataRequest_1 {
        inline app::GetTitleDataRequest_1__Class** type_info() {
            static app::GetTitleDataRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0475F6D8));
            }
            return cache;
        }
        inline app::GetTitleDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest_1* create() {
            return il2cpp::create_object<app::GetTitleDataRequest_1>(get_class());
        }
    } // namespace GetTitleDataRequest_1
} // namespace app::classes::types
