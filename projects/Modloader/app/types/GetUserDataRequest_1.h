#pragma once
#include <Modloader/app/structs/GetUserDataRequest_1.h>
#include <Modloader/app/structs/GetUserDataRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserDataRequest_1 {
        inline app::GetUserDataRequest_1__Class** type_info() {
            static app::GetUserDataRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470F198));
            }
            return cache;
        }
        inline app::GetUserDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetUserDataRequest");
        }
        inline app::GetUserDataRequest_1* create() {
            return il2cpp::create_object<app::GetUserDataRequest_1>(get_class());
        }
    } // namespace GetUserDataRequest_1
} // namespace app::classes::types
