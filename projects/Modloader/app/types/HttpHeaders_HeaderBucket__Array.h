#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Array__Class.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Array.h>

namespace app::classes::types {
    namespace HttpHeaders_HeaderBucket__Array {
        namespace {
            inline app::HttpHeaders_HeaderBucket__Array__Class* type_info_ref = nullptr;
        }
        inline app::HttpHeaders_HeaderBucket__Array__Class** type_info = &type_info_ref;
        inline app::HttpHeaders_HeaderBucket__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaders_HeaderBucket__Array__Class>(type_info, "System.Net.Http.Headers", "HttpHeaders+HeaderBucket[]");
        }
        inline app::HttpHeaders_HeaderBucket__Array* create() {
            return il2cpp::create_object<app::HttpHeaders_HeaderBucket__Array>(get_class());
        }
    } // namespace HttpHeaders_HeaderBucket__Array
} // namespace app::classes::types
