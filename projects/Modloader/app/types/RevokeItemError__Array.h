#pragma once
#include <Modloader/app/structs/RevokeItemError__Array.h>
#include <Modloader/app/structs/RevokeItemError__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeItemError__Array {
        inline app::RevokeItemError__Array__Class** type_info() {
            static app::RevokeItemError__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RevokeItemError__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RevokeItemError__Array__Class* get_class() {
            return il2cpp::get_class<app::RevokeItemError__Array__Class>(type_info(), "PlayFab.ServerModels", "RevokeItemError[]");
        }
        inline app::RevokeItemError__Array* create() {
            return il2cpp::create_object<app::RevokeItemError__Array>(get_class());
        }
    } // namespace RevokeItemError__Array
} // namespace app::classes::types
