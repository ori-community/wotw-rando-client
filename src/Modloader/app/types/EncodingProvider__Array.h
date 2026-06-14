#pragma once
#include <Modloader/app/structs/EncodingProvider__Array.h>
#include <Modloader/app/structs/EncodingProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncodingProvider__Array {
        inline app::EncodingProvider__Array__Class** type_info() {
            static app::EncodingProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EncodingProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EncodingProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::EncodingProvider__Array__Class>(type_info(), "System.Text", "EncodingProvider[]");
        }
        inline app::EncodingProvider__Array* create() {
            return il2cpp::create_object<app::EncodingProvider__Array>(get_class());
        }
    } // namespace EncodingProvider__Array
} // namespace app::classes::types
