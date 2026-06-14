#pragma once
#include <Modloader/app/structs/Value__Array.h>
#include <Modloader/app/structs/Value__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Value__Array {
        inline app::Value__Array__Class** type_info() {
            static app::Value__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Value__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Value__Array__Class* get_class() {
            return il2cpp::get_class<app::Value__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Value[]");
        }
        inline app::Value__Array* create() {
            return il2cpp::create_object<app::Value__Array>(get_class());
        }
    } // namespace Value__Array
} // namespace app::classes::types
