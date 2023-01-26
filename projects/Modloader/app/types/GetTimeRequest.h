#pragma once
#include <Modloader/app/structs/GetTimeRequest.h>
#include <Modloader/app/structs/GetTimeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTimeRequest {
        inline app::GetTimeRequest__Class** type_info() {
            static app::GetTimeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTimeRequest__Class**)(modloader::win::memory::resolve_rva(0x04724238));
            }
            return cache;
        }
        inline app::GetTimeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTimeRequest__Class>(type_info(), "PlayFab.ClientModels", "GetTimeRequest");
        }
        inline app::GetTimeRequest* create() {
            return il2cpp::create_object<app::GetTimeRequest>(get_class());
        }
    } // namespace GetTimeRequest
} // namespace app::classes::types
