#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpRequestCreator {
        inline app::FtpRequestCreator__Class** type_info = (app::FtpRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04752160));
        inline app::FtpRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FtpRequestCreator__Class>(type_info, "System.Net", "FtpRequestCreator");
        }
        inline app::FtpRequestCreator* create() {
            return il2cpp::create_object<app::FtpRequestCreator>(get_class());
        }
    } // namespace FtpRequestCreator
} // namespace app::classes::types
