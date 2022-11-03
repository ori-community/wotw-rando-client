#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpDataStream_ReadDelegate {
        inline app::FtpDataStream_ReadDelegate__Class** type_info = (app::FtpDataStream_ReadDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472D4C0));
        inline app::FtpDataStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpDataStream_ReadDelegate__Class>(type_info, "System.Net", "FtpDataStream", "ReadDelegate");
        }
        inline app::FtpDataStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FtpDataStream_ReadDelegate>(get_class());
        }
    } // namespace FtpDataStream_ReadDelegate
} // namespace app::classes::types
