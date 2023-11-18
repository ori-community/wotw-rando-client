#pragma once
#include <Modloader/app/structs/FtpStatus.h>
#include <Modloader/app/structs/FtpStatus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpStatus {
        inline app::FtpStatus__Class** type_info() {
            static app::FtpStatus__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpStatus__Class**)(modloader::win::memory::resolve_rva(0x04714B10));
            }
            return cache;
        }
        inline app::FtpStatus__Class* get_class() {
            return il2cpp::get_class<app::FtpStatus__Class>(type_info(), "System.Net", "FtpStatus");
        }
        inline app::FtpStatus* create() {
            return il2cpp::create_object<app::FtpStatus>(get_class());
        }
    } // namespace FtpStatus
} // namespace app::classes::types
