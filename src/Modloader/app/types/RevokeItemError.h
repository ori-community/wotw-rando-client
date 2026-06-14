#pragma once
#include <Modloader/app/structs/RevokeItemError.h>
#include <Modloader/app/structs/RevokeItemError__Array.h>
#include <Modloader/app/structs/RevokeItemError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeItemError {
        inline app::RevokeItemError__Class** type_info() {
            static app::RevokeItemError__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RevokeItemError__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RevokeItemError__Class* get_class() {
            return il2cpp::get_class<app::RevokeItemError__Class>(type_info(), "PlayFab.ServerModels", "RevokeItemError");
        }
        inline app::RevokeItemError* create() {
            return il2cpp::create_object<app::RevokeItemError>(get_class());
        }
        inline app::RevokeItemError__Array* create_array(int size) {
            return il2cpp::array_new<app::RevokeItemError__Array>(get_class(), size);
        }
        inline app::RevokeItemError__Array* create_array(const std::vector<app::RevokeItemError*>& items) {
            return il2cpp::array_new<app::RevokeItemError__Array>(get_class(), items);
        }
    } // namespace RevokeItemError
} // namespace app::classes::types
