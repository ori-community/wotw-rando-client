#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpWebResponse {
        inline app::FtpWebResponse__Class** type_info = (app::FtpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x04762AF0));
        inline app::FtpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FtpWebResponse__Class>(type_info, "System.Net", "FtpWebResponse");
        }
        inline app::FtpWebResponse* create() {
            return il2cpp::create_object<app::FtpWebResponse>(get_class());
        }
    } // namespace FtpWebResponse
} // namespace app::classes::types
