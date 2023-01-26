#pragma once
#include <Modloader/app/structs/UpdateBanRequest__Array.h>
#include <Modloader/app/structs/UpdateBanRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateBanRequest__Array {
        inline app::UpdateBanRequest__Array__Class** type_info() {
            static app::UpdateBanRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateBanRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateBanRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateBanRequest__Array__Class>(type_info(), "PlayFab.ServerModels", "UpdateBanRequest[]");
        }
        inline app::UpdateBanRequest__Array* create() {
            return il2cpp::create_object<app::UpdateBanRequest__Array>(get_class());
        }
    } // namespace UpdateBanRequest__Array
} // namespace app::classes::types
