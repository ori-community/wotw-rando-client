#pragma once
#include <Modloader/app/structs/HttpHeaders_HeaderBucket.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Array.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpHeaders_HeaderBucket {
        inline app::HttpHeaders_HeaderBucket__Class** type_info() {
            static app::HttpHeaders_HeaderBucket__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpHeaders_HeaderBucket__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpHeaders_HeaderBucket__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpHeaders_HeaderBucket__Class>(type_info(), "System.Net.Http.Headers", "HttpHeaders", "HeaderBucket");
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
