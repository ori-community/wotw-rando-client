#pragma once
#include <Modloader/app/structs/WritableAttribute.h>
#include <Modloader/app/structs/WritableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WritableAttribute {
        inline app::WritableAttribute__Class** type_info() {
            static app::WritableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WritableAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WritableAttribute__Class* get_class() {
            return il2cpp::get_class<app::WritableAttribute__Class>(type_info(), "UnityEngine", "WritableAttribute");
        }
        inline app::WritableAttribute* create() {
            return il2cpp::create_object<app::WritableAttribute>(get_class());
        }
    } // namespace WritableAttribute
} // namespace app::classes::types
