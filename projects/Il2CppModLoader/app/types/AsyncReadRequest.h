#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncReadRequest {
        inline app::AsyncReadRequest__Class** type_info = (app::AsyncReadRequest__Class**)(modloader::win::memory::resolve_rva(0x0477F410));
        inline app::AsyncReadRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncReadRequest__Class>(type_info, "Mono.Net.Security", "AsyncReadRequest");
        }
        inline app::AsyncReadRequest* create() {
            return il2cpp::create_object<app::AsyncReadRequest>(get_class());
        }
    } // namespace AsyncReadRequest
} // namespace app::classes::types
