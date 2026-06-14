#pragma once
#include <Modloader/app/structs/User__Array.h>
#include <Modloader/app/structs/User__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace User__Array {
        inline app::User__Array__Class** type_info() {
            static app::User__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::User__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::User__Array__Class* get_class() {
            return il2cpp::get_class<app::User__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "User[]");
        }
        inline app::User__Array* create() {
            return il2cpp::create_object<app::User__Array>(get_class());
        }
    } // namespace User__Array
} // namespace app::classes::types
