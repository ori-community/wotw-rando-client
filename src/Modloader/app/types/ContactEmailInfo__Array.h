#pragma once
#include <Modloader/app/structs/ContactEmailInfo__Array.h>
#include <Modloader/app/structs/ContactEmailInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo__Array {
        inline app::ContactEmailInfo__Array__Class** type_info() {
            static app::ContactEmailInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactEmailInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactEmailInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo__Array__Class>(type_info(), "PlayFab.ServerModels", "ContactEmailInfo[]");
        }
        inline app::ContactEmailInfo__Array* create() {
            return il2cpp::create_object<app::ContactEmailInfo__Array>(get_class());
        }
    } // namespace ContactEmailInfo__Array
} // namespace app::classes::types
