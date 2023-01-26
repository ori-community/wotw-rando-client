#pragma once
#include <Modloader/app/structs/AsyncReadOrWriteRequest.h>
#include <Modloader/app/structs/AsyncReadOrWriteRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncReadOrWriteRequest {
        inline app::AsyncReadOrWriteRequest__Class** type_info() {
            static app::AsyncReadOrWriteRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncReadOrWriteRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncReadOrWriteRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncReadOrWriteRequest__Class>(type_info(), "Mono.Net.Security", "AsyncReadOrWriteRequest");
        }
        inline app::AsyncReadOrWriteRequest* create() {
            return il2cpp::create_object<app::AsyncReadOrWriteRequest>(get_class());
        }
    } // namespace AsyncReadOrWriteRequest
} // namespace app::classes::types
