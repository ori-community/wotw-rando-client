#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpStatus {
        inline app::FtpStatus__Class** type_info = (app::FtpStatus__Class**)(modloader::win::memory::resolve_rva(0x04714B10));
        inline app::FtpStatus__Class* get_class() {
            return il2cpp::get_class<app::FtpStatus__Class>(type_info, "System.Net", "FtpStatus");
        }
        inline app::FtpStatus* create() {
            return il2cpp::create_object<app::FtpStatus>(get_class());
        }
    } // namespace FtpStatus
} // namespace app::classes::types
