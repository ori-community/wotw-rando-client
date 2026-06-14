#pragma once
#include <Modloader/app/structs/WebConnection__Array.h>
#include <Modloader/app/structs/WebConnection__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnection__Array {
        inline app::WebConnection__Array__Class** type_info() {
            static app::WebConnection__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebConnection__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebConnection__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnection__Array__Class>(type_info(), "System.Net", "WebConnection[]");
        }
        inline app::WebConnection__Array* create() {
            return il2cpp::create_object<app::WebConnection__Array>(get_class());
        }
    } // namespace WebConnection__Array
} // namespace app::classes::types
