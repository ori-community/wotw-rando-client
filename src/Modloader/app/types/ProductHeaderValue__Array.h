#pragma once
#include <Modloader/app/structs/ProductHeaderValue__Array.h>
#include <Modloader/app/structs/ProductHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProductHeaderValue__Array {
        inline app::ProductHeaderValue__Array__Class** type_info() {
            static app::ProductHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProductHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProductHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ProductHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "ProductHeaderValue[]");
        }
        inline app::ProductHeaderValue__Array* create() {
            return il2cpp::create_object<app::ProductHeaderValue__Array>(get_class());
        }
    } // namespace ProductHeaderValue__Array
} // namespace app::classes::types
