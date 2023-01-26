#pragma once
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#include <Modloader/app/structs/FtpStatusCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpStatusCode__Enum {
        inline app::FtpStatusCode__Enum__Class** type_info() {
            static app::FtpStatusCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472F548));
            }
            return cache;
        }
        inline app::FtpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FtpStatusCode__Enum__Class>(type_info(), "System.Net", "FtpStatusCode");
        }
        inline app::FtpStatusCode__Enum* create() {
            return il2cpp::create_object<app::FtpStatusCode__Enum>(get_class());
        }
    } // namespace FtpStatusCode__Enum
} // namespace app::classes::types
