#pragma once
#include <Modloader/app/structs/TextAreaAttribute.h>
#include <Modloader/app/structs/TextAreaAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAreaAttribute {
        inline app::TextAreaAttribute__Class** type_info() {
            static app::TextAreaAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAreaAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAreaAttribute__Class* get_class() {
            return il2cpp::get_class<app::TextAreaAttribute__Class>(type_info(), "UnityEngine", "TextAreaAttribute");
        }
        inline app::TextAreaAttribute* create() {
            return il2cpp::create_object<app::TextAreaAttribute>(get_class());
        }
    } // namespace TextAreaAttribute
} // namespace app::classes::types
