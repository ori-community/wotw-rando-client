#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProductHeaderValue__Array {
        namespace {
            inline app::ProductHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::ProductHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::ProductHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ProductHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "ProductHeaderValue[]");
        }
        inline app::ProductHeaderValue__Array* create() {
            return il2cpp::create_object<app::ProductHeaderValue__Array>(get_class());
        }
    } // namespace ProductHeaderValue__Array
} // namespace app::classes::types
