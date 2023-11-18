#pragma once
#include <Modloader/app/structs/IgnoreCollision.h>
#include <Modloader/app/structs/IgnoreCollision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreCollision {
        inline app::IgnoreCollision__Class** type_info() {
            static app::IgnoreCollision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreCollision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreCollision__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCollision__Class>(type_info(), "", "IgnoreCollision");
        }
        inline app::IgnoreCollision* create() {
            return il2cpp::create_object<app::IgnoreCollision>(get_class());
        }
    } // namespace IgnoreCollision
} // namespace app::classes::types
