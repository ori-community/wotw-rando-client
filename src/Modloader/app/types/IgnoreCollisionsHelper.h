#pragma once
#include <Modloader/app/structs/IgnoreCollisionsHelper.h>
#include <Modloader/app/structs/IgnoreCollisionsHelper__Boxed.h>
#include <Modloader/app/structs/IgnoreCollisionsHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreCollisionsHelper {
        inline app::IgnoreCollisionsHelper__Class** type_info() {
            static app::IgnoreCollisionsHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreCollisionsHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreCollisionsHelper__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCollisionsHelper__Class>(type_info(), "", "IgnoreCollisionsHelper");
        }
        inline app::IgnoreCollisionsHelper* create() {
            return il2cpp::create_object<app::IgnoreCollisionsHelper>(get_class());
        }
        inline app::IgnoreCollisionsHelper__Boxed* box(app::IgnoreCollisionsHelper value) {
            return il2cpp::box_value<app::IgnoreCollisionsHelper__Boxed>(get_class(), value);
        }
    } // namespace IgnoreCollisionsHelper
} // namespace app::classes::types
