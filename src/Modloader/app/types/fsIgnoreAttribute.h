#pragma once
#include <Modloader/app/structs/fsIgnoreAttribute.h>
#include <Modloader/app/structs/fsIgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsIgnoreAttribute {
        inline app::fsIgnoreAttribute__Class** type_info() {
            static app::fsIgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsIgnoreAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsIgnoreAttribute__Class>(type_info(), "FullSerializer", "fsIgnoreAttribute");
        }
        inline app::fsIgnoreAttribute* create() {
            return il2cpp::create_object<app::fsIgnoreAttribute>(get_class());
        }
    } // namespace fsIgnoreAttribute
} // namespace app::classes::types
