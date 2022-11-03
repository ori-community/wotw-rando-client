#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeInstallRequest {
        inline app::AttributeInstallRequest__Class** type_info = (app::AttributeInstallRequest__Class**)(modloader::win::memory::resolve_rva(0x04778CA8));
        inline app::AttributeInstallRequest__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallRequest__Class>(type_info, "PlayFab.ClientModels", "AttributeInstallRequest");
        }
        inline app::AttributeInstallRequest* create() {
            return il2cpp::create_object<app::AttributeInstallRequest>(get_class());
        }
    } // namespace AttributeInstallRequest
} // namespace app::classes::types
