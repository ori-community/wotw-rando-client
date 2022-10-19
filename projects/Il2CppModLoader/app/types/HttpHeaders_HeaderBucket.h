#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpHeaders_HeaderBucket {
        namespace {
            inline app::HttpHeaders_HeaderBucket__Class* type_info_ref = nullptr;
        }
        inline app::HttpHeaders_HeaderBucket__Class** type_info = &type_info_ref;
        inline app::HttpHeaders_HeaderBucket__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpHeaders_HeaderBucket__Class>(type_info, "System.Net.Http.Headers", "HttpHeaders", "HeaderBucket");
        }
        inline app::HttpHeaders_HeaderBucket* create() {
            return il2cpp::create_object<app::HttpHeaders_HeaderBucket>(get_class());
        }
        inline app::HttpHeaders_HeaderBucket__Array* create_array(int size) {
            return il2cpp::array_new<app::HttpHeaders_HeaderBucket__Array>(get_class(), size);
        }
        inline app::HttpHeaders_HeaderBucket__Array* create_array(const std::vector<app::HttpHeaders_HeaderBucket*>& items) {
            return il2cpp::array_new<app::HttpHeaders_HeaderBucket__Array>(get_class(), items);
        }
    } // namespace HttpHeaders_HeaderBucket
} // namespace app::classes::types
