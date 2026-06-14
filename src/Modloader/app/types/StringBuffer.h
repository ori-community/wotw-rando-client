#pragma once
#include <Modloader/app/structs/StringBuffer.h>
#include <Modloader/app/structs/StringBuffer__Boxed.h>
#include <Modloader/app/structs/StringBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringBuffer {
        inline app::StringBuffer__Class** type_info() {
            static app::StringBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringBuffer__Class* get_class() {
            return il2cpp::get_class<app::StringBuffer__Class>(type_info(), "Newtonsoft.Json.Utilities", "StringBuffer");
        }
        inline app::StringBuffer* create() {
            return il2cpp::create_object<app::StringBuffer>(get_class());
        }
        inline app::StringBuffer__Boxed* box(app::StringBuffer value) {
            return il2cpp::box_value<app::StringBuffer__Boxed>(get_class(), value);
        }
    } // namespace StringBuffer
} // namespace app::classes::types
