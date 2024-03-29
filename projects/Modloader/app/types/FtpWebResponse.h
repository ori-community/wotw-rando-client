#pragma once
#include <Modloader/app/structs/FtpWebResponse.h>
#include <Modloader/app/structs/FtpWebResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpWebResponse {
        inline app::FtpWebResponse__Class** type_info() {
            static app::FtpWebResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x04762AF0));
            }
            return cache;
        }
        inline app::FtpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FtpWebResponse__Class>(type_info(), "System.Net", "FtpWebResponse");
        }
        inline app::FtpWebResponse* create() {
            return il2cpp::create_object<app::FtpWebResponse>(get_class());
        }
    } // namespace FtpWebResponse
} // namespace app::classes::types
