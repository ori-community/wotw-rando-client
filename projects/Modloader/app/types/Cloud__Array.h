#pragma once
#include <Modloader/app/structs/Cloud__Array.h>
#include <Modloader/app/structs/Cloud__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cloud__Array {
        inline app::Cloud__Array__Class** type_info() {
            static app::Cloud__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cloud__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cloud__Array__Class* get_class() {
            return il2cpp::get_class<app::Cloud__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Cloud[]");
        }
        inline app::Cloud__Array* create() {
            return il2cpp::create_object<app::Cloud__Array>(get_class());
        }
    } // namespace Cloud__Array
} // namespace app::classes::types
