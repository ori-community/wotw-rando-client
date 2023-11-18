#pragma once
#include <Modloader/app/structs/FtpDataStream.h>
#include <Modloader/app/structs/FtpDataStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpDataStream {
        inline app::FtpDataStream__Class** type_info() {
            static app::FtpDataStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpDataStream__Class**)(modloader::win::memory::resolve_rva(0x0471D860));
            }
            return cache;
        }
        inline app::FtpDataStream__Class* get_class() {
            return il2cpp::get_class<app::FtpDataStream__Class>(type_info(), "System.Net", "FtpDataStream");
        }
        inline app::FtpDataStream* create() {
            return il2cpp::create_object<app::FtpDataStream>(get_class());
        }
    } // namespace FtpDataStream
} // namespace app::classes::types
