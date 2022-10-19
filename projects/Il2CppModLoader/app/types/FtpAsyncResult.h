#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpAsyncResult {
        inline app::FtpAsyncResult__Class** type_info = (app::FtpAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04775EC0));
        inline app::FtpAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FtpAsyncResult__Class>(type_info, "System.Net", "FtpAsyncResult");
        }
        inline app::FtpAsyncResult* create() {
            return il2cpp::create_object<app::FtpAsyncResult>(get_class());
        }
    } // namespace FtpAsyncResult
} // namespace app::classes::types
