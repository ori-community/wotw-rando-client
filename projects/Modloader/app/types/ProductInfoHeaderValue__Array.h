#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProductInfoHeaderValue__Array {
        namespace {
            inline app::ProductInfoHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::ProductInfoHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::ProductInfoHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ProductInfoHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "ProductInfoHeaderValue[]");
        }
        inline app::ProductInfoHeaderValue__Array* create() {
            return il2cpp::create_object<app::ProductInfoHeaderValue__Array>(get_class());
        }
    } // namespace ProductInfoHeaderValue__Array
} // namespace app::classes::types
