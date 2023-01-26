#pragma once
#include <Modloader/app/structs/ProductInfoHeaderValue__Array.h>
#include <Modloader/app/structs/ProductInfoHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProductInfoHeaderValue__Array {
        inline app::ProductInfoHeaderValue__Array__Class** type_info() {
            static app::ProductInfoHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProductInfoHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProductInfoHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ProductInfoHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "ProductInfoHeaderValue[]");
        }
        inline app::ProductInfoHeaderValue__Array* create() {
            return il2cpp::create_object<app::ProductInfoHeaderValue__Array>(get_class());
        }
    } // namespace ProductInfoHeaderValue__Array
} // namespace app::classes::types
