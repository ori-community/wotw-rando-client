#pragma once
#include <Modloader/app/structs/Utc__Array.h>
#include <Modloader/app/structs/Utc__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utc__Array {
        inline app::Utc__Array__Class** type_info() {
            static app::Utc__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Utc__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Utc__Array__Class* get_class() {
            return il2cpp::get_class<app::Utc__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Utc[]");
        }
        inline app::Utc__Array* create() {
            return il2cpp::create_object<app::Utc__Array>(get_class());
        }
    } // namespace Utc__Array
} // namespace app::classes::types
