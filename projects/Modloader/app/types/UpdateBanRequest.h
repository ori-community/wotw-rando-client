#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateBanRequest__Class.h>
#include <Modloader/app/structs/UpdateBanRequest.h>
#include <Modloader/app/structs/UpdateBanRequest__Array.h>

namespace app::classes::types {
    namespace UpdateBanRequest {
        namespace {
            inline app::UpdateBanRequest__Class* type_info_ref = nullptr;
        }
        inline app::UpdateBanRequest__Class** type_info = &type_info_ref;
        inline app::UpdateBanRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBanRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateBanRequest");
        }
        inline app::UpdateBanRequest* create() {
            return il2cpp::create_object<app::UpdateBanRequest>(get_class());
        }
        inline app::UpdateBanRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateBanRequest__Array>(get_class(), size);
        }
        inline app::UpdateBanRequest__Array* create_array(const std::vector<app::UpdateBanRequest*>& items) {
            return il2cpp::array_new<app::UpdateBanRequest__Array>(get_class(), items);
        }
    } // namespace UpdateBanRequest
} // namespace app::classes::types
