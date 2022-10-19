#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpDataStream {
        inline app::FtpDataStream__Class** type_info = (app::FtpDataStream__Class**)(modloader::win::memory::resolve_rva(0x0471D860));
        inline app::FtpDataStream__Class* get_class() {
            return il2cpp::get_class<app::FtpDataStream__Class>(type_info, "System.Net", "FtpDataStream");
        }
        inline app::FtpDataStream* create() {
            return il2cpp::create_object<app::FtpDataStream>(get_class());
        }
    } // namespace FtpDataStream
} // namespace app::classes::types
