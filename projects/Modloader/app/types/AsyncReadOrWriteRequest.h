#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncReadOrWriteRequest {
        namespace {
            inline app::AsyncReadOrWriteRequest__Class* type_info_ref = nullptr;
        }
        inline app::AsyncReadOrWriteRequest__Class** type_info = &type_info_ref;
        inline app::AsyncReadOrWriteRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncReadOrWriteRequest__Class>(type_info, "Mono.Net.Security", "AsyncReadOrWriteRequest");
        }
        inline app::AsyncReadOrWriteRequest* create() {
            return il2cpp::create_object<app::AsyncReadOrWriteRequest>(get_class());
        }
    } // namespace AsyncReadOrWriteRequest
} // namespace app::classes::types
