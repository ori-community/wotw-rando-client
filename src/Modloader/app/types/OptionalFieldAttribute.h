#pragma once
#include <Modloader/app/structs/OptionalFieldAttribute.h>
#include <Modloader/app/structs/OptionalFieldAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionalFieldAttribute {
        inline app::OptionalFieldAttribute__Class** type_info() {
            static app::OptionalFieldAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OptionalFieldAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OptionalFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::OptionalFieldAttribute__Class>(type_info(), "System.Runtime.Serialization", "OptionalFieldAttribute");
        }
        inline app::OptionalFieldAttribute* create() {
            return il2cpp::create_object<app::OptionalFieldAttribute>(get_class());
        }
    } // namespace OptionalFieldAttribute
} // namespace app::classes::types
