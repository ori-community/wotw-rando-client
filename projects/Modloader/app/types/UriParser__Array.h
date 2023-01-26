#pragma once
#include <Modloader/app/structs/UriParser__Array.h>
#include <Modloader/app/structs/UriParser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriParser__Array {
        inline app::UriParser__Array__Class** type_info() {
            static app::UriParser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriParser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriParser__Array__Class* get_class() {
            return il2cpp::get_class<app::UriParser__Array__Class>(type_info(), "System", "UriParser[]");
        }
        inline app::UriParser__Array* create() {
            return il2cpp::create_object<app::UriParser__Array>(get_class());
        }
    } // namespace UriParser__Array
} // namespace app::classes::types
