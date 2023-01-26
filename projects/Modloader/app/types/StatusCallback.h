#pragma once
#include <Modloader/app/structs/StatusCallback.h>
#include <Modloader/app/structs/StatusCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatusCallback {
        inline app::StatusCallback__Class** type_info() {
            static app::StatusCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatusCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatusCallback__Class* get_class() {
            return il2cpp::get_class<app::StatusCallback__Class>(type_info(), "", "StatusCallback");
        }
        inline app::StatusCallback* create() {
            return il2cpp::create_object<app::StatusCallback>(get_class());
        }
    } // namespace StatusCallback
} // namespace app::classes::types
