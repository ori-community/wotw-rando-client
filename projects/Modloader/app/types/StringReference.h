#pragma once
#include <Modloader/app/structs/StringReference.h>
#include <Modloader/app/structs/StringReference__Boxed.h>
#include <Modloader/app/structs/StringReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringReference {
        inline app::StringReference__Class** type_info() {
            static app::StringReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringReference__Class* get_class() {
            return il2cpp::get_class<app::StringReference__Class>(type_info(), "Newtonsoft.Json.Utilities", "StringReference");
        }
        inline app::StringReference* create() {
            return il2cpp::create_object<app::StringReference>(get_class());
        }
        inline app::StringReference__Boxed* box(app::StringReference value) {
            return il2cpp::box_value<app::StringReference__Boxed>(get_class(), value);
        }
    } // namespace StringReference
} // namespace app::classes::types
