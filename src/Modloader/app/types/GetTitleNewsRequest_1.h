#pragma once
#include <Modloader/app/structs/GetTitleNewsRequest_1.h>
#include <Modloader/app/structs/GetTitleNewsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleNewsRequest_1 {
        inline app::GetTitleNewsRequest_1__Class** type_info() {
            static app::GetTitleNewsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleNewsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04790F90));
            }
            return cache;
        }
        inline app::GetTitleNewsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetTitleNewsRequest");
        }
        inline app::GetTitleNewsRequest_1* create() {
            return il2cpp::create_object<app::GetTitleNewsRequest_1>(get_class());
        }
    } // namespace GetTitleNewsRequest_1
} // namespace app::classes::types
