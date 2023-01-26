#pragma once
#include <Modloader/app/structs/EntityTokenResponse_1.h>
#include <Modloader/app/structs/EntityTokenResponse_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTokenResponse_1 {
        inline app::EntityTokenResponse_1__Class** type_info() {
            static app::EntityTokenResponse_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityTokenResponse_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityTokenResponse_1__Class* get_class() {
            return il2cpp::get_class<app::EntityTokenResponse_1__Class>(type_info(), "PlayFab.ServerModels", "EntityTokenResponse");
        }
        inline app::EntityTokenResponse_1* create() {
            return il2cpp::create_object<app::EntityTokenResponse_1>(get_class());
        }
    } // namespace EntityTokenResponse_1
} // namespace app::classes::types
