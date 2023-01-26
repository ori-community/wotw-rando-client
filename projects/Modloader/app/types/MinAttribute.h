#pragma once
#include <Modloader/app/structs/MinAttribute.h>
#include <Modloader/app/structs/MinAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinAttribute {
        inline app::MinAttribute__Class** type_info() {
            static app::MinAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinAttribute__Class* get_class() {
            return il2cpp::get_class<app::MinAttribute__Class>(type_info(), "UnityEngine", "MinAttribute");
        }
        inline app::MinAttribute* create() {
            return il2cpp::create_object<app::MinAttribute>(get_class());
        }
    } // namespace MinAttribute
} // namespace app::classes::types
