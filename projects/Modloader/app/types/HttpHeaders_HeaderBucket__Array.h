#pragma once
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Array.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpHeaders_HeaderBucket__Array {
        inline app::HttpHeaders_HeaderBucket__Array__Class** type_info() {
            static app::HttpHeaders_HeaderBucket__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpHeaders_HeaderBucket__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpHeaders_HeaderBucket__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaders_HeaderBucket__Array__Class>(type_info(), "System.Net.Http.Headers", "HttpHeaders+HeaderBucket[]");
        }
        inline app::HttpHeaders_HeaderBucket__Array* create() {
            return il2cpp::create_object<app::HttpHeaders_HeaderBucket__Array>(get_class());
        }
    } // namespace HttpHeaders_HeaderBucket__Array
} // namespace app::classes::types
