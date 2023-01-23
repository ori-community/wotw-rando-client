#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FtpWebRequest__Class.h>
#include <Modloader/app/structs/FtpWebRequest.h>

namespace app::classes::types {
    namespace FtpWebRequest {
        inline app::FtpWebRequest__Class** type_info = (app::FtpWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04780F78));
        inline app::FtpWebRequest__Class* get_class() {
            return il2cpp::get_class<app::FtpWebRequest__Class>(type_info, "System.Net", "FtpWebRequest");
        }
        inline app::FtpWebRequest* create() {
            return il2cpp::create_object<app::FtpWebRequest>(get_class());
        }
    } // namespace FtpWebRequest
} // namespace app::classes::types
