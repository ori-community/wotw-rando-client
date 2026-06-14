#pragma once
#include <Modloader/app/structs/fsPropertyAttribute.h>
#include <Modloader/app/structs/fsPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPropertyAttribute {
        inline app::fsPropertyAttribute__Class** type_info() {
            static app::fsPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsPropertyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsPropertyAttribute__Class>(type_info(), "FullSerializer", "fsPropertyAttribute");
        }
        inline app::fsPropertyAttribute* create() {
            return il2cpp::create_object<app::fsPropertyAttribute>(get_class());
        }
    } // namespace fsPropertyAttribute
} // namespace app::classes::types
