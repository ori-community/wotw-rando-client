#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetTimeRequest__Class.h>
#include <Modloader/app/structs/GetTimeRequest.h>

namespace app::classes::types {
    namespace GetTimeRequest {
        inline app::GetTimeRequest__Class** type_info = (app::GetTimeRequest__Class**)(modloader::win::memory::resolve_rva(0x04724238));
        inline app::GetTimeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTimeRequest__Class>(type_info, "PlayFab.ClientModels", "GetTimeRequest");
        }
        inline app::GetTimeRequest* create() {
            return il2cpp::create_object<app::GetTimeRequest>(get_class());
        }
    } // namespace GetTimeRequest
} // namespace app::classes::types
