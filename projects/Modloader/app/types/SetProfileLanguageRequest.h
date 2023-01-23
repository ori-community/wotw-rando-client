#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetProfileLanguageRequest__Class.h>
#include <Modloader/app/structs/SetProfileLanguageRequest.h>

namespace app::classes::types {
    namespace SetProfileLanguageRequest {
        inline app::SetProfileLanguageRequest__Class** type_info = (app::SetProfileLanguageRequest__Class**)(modloader::win::memory::resolve_rva(0x0477FFB0));
        inline app::SetProfileLanguageRequest__Class* get_class() {
            return il2cpp::get_class<app::SetProfileLanguageRequest__Class>(type_info, "PlayFab.ProfilesModels", "SetProfileLanguageRequest");
        }
        inline app::SetProfileLanguageRequest* create() {
            return il2cpp::create_object<app::SetProfileLanguageRequest>(get_class());
        }
    } // namespace SetProfileLanguageRequest
} // namespace app::classes::types
