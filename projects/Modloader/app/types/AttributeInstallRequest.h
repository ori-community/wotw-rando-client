#pragma once
#include <Modloader/app/structs/AttributeInstallRequest.h>
#include <Modloader/app/structs/AttributeInstallRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeInstallRequest {
        inline app::AttributeInstallRequest__Class** type_info() {
            static app::AttributeInstallRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeInstallRequest__Class**)(modloader::win::memory::resolve_rva(0x04778CA8));
            }
            return cache;
        }
        inline app::AttributeInstallRequest__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallRequest__Class>(type_info(), "PlayFab.ClientModels", "AttributeInstallRequest");
        }
        inline app::AttributeInstallRequest* create() {
            return il2cpp::create_object<app::AttributeInstallRequest>(get_class());
        }
    } // namespace AttributeInstallRequest
} // namespace app::classes::types
