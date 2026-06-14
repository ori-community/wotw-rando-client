#pragma once
#include <Modloader/app/structs/SetPlayerSecretRequest_1.h>
#include <Modloader/app/structs/SetPlayerSecretRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretRequest_1 {
        inline app::SetPlayerSecretRequest_1__Class** type_info() {
            static app::SetPlayerSecretRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetPlayerSecretRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04731760));
            }
            return cache;
        }
        inline app::SetPlayerSecretRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretRequest_1__Class>(type_info(), "PlayFab.ServerModels", "SetPlayerSecretRequest");
        }
        inline app::SetPlayerSecretRequest_1* create() {
            return il2cpp::create_object<app::SetPlayerSecretRequest_1>(get_class());
        }
    } // namespace SetPlayerSecretRequest_1
} // namespace app::classes::types
