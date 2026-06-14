#pragma once
#include <Modloader/app/structs/Os__Array.h>
#include <Modloader/app/structs/Os__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Os__Array {
        inline app::Os__Array__Class** type_info() {
            static app::Os__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Os__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Os__Array__Class* get_class() {
            return il2cpp::get_class<app::Os__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Os[]");
        }
        inline app::Os__Array* create() {
            return il2cpp::create_object<app::Os__Array>(get_class());
        }
    } // namespace Os__Array
} // namespace app::classes::types
