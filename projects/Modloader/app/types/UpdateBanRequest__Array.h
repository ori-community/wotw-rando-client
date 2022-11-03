#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateBanRequest__Array {
        namespace {
            inline app::UpdateBanRequest__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpdateBanRequest__Array__Class** type_info = &type_info_ref;
        inline app::UpdateBanRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateBanRequest__Array__Class>(type_info, "PlayFab.ServerModels", "UpdateBanRequest[]");
        }
        inline app::UpdateBanRequest__Array* create() {
            return il2cpp::create_object<app::UpdateBanRequest__Array>(get_class());
        }
    } // namespace UpdateBanRequest__Array
} // namespace app::classes::types
