#pragma once
#include <Modloader/app/structs/WindCollision.h>
#include <Modloader/app/structs/WindCollision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindCollision {
        inline app::WindCollision__Class** type_info() {
            static app::WindCollision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindCollision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindCollision__Class* get_class() {
            return il2cpp::get_class<app::WindCollision__Class>(type_info(), "", "WindCollision");
        }
        inline app::WindCollision* create() {
            return il2cpp::create_object<app::WindCollision>(get_class());
        }
    } // namespace WindCollision
} // namespace app::classes::types
