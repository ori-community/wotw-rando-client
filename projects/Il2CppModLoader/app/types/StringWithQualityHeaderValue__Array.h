#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringWithQualityHeaderValue__Array {
        namespace {
            app::StringWithQualityHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        app::StringWithQualityHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::StringWithQualityHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::StringWithQualityHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "StringWithQualityHeaderValue[]");
        }
        inline app::StringWithQualityHeaderValue__Array* create() {
            return il2cpp::create_object<app::StringWithQualityHeaderValue__Array>(get_class());
        }
    } // namespace StringWithQualityHeaderValue__Array
} // namespace app::classes::types
