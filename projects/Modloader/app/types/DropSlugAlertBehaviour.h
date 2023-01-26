#pragma once
#include <Modloader/app/structs/DropSlugAlertBehaviour.h>
#include <Modloader/app/structs/DropSlugAlertBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugAlertBehaviour {
        inline app::DropSlugAlertBehaviour__Class** type_info() {
            static app::DropSlugAlertBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugAlertBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugAlertBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugAlertBehaviour__Class>(type_info(), "", "DropSlugAlertBehaviour");
        }
        inline app::DropSlugAlertBehaviour* create() {
            return il2cpp::create_object<app::DropSlugAlertBehaviour>(get_class());
        }
    } // namespace DropSlugAlertBehaviour
} // namespace app::classes::types
