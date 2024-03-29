#pragma once
#include <Modloader/app/structs/FtpAsyncResult.h>
#include <Modloader/app/structs/FtpAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpAsyncResult {
        inline app::FtpAsyncResult__Class** type_info() {
            static app::FtpAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04775EC0));
            }
            return cache;
        }
        inline app::FtpAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FtpAsyncResult__Class>(type_info(), "System.Net", "FtpAsyncResult");
        }
        inline app::FtpAsyncResult* create() {
            return il2cpp::create_object<app::FtpAsyncResult>(get_class());
        }
    } // namespace FtpAsyncResult
} // namespace app::classes::types
