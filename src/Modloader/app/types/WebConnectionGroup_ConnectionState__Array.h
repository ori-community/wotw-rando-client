#pragma once
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Array.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup_ConnectionState__Array {
        inline app::WebConnectionGroup_ConnectionState__Array__Class** type_info() {
            static app::WebConnectionGroup_ConnectionState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebConnectionGroup_ConnectionState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebConnectionGroup_ConnectionState__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup_ConnectionState__Array__Class>(type_info(), "System.Net", "WebConnectionGroup+ConnectionState[]");
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create() {
            return il2cpp::create_object<app::WebConnectionGroup_ConnectionState__Array>(get_class());
        }
    } // namespace WebConnectionGroup_ConnectionState__Array
} // namespace app::classes::types
