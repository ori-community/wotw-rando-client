#pragma once
#include <Modloader/app/structs/FtpDataStream_ReadDelegate.h>
#include <Modloader/app/structs/FtpDataStream_ReadDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpDataStream_ReadDelegate {
        inline app::FtpDataStream_ReadDelegate__Class** type_info() {
            static app::FtpDataStream_ReadDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpDataStream_ReadDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472D4C0));
            }
            return cache;
        }
        inline app::FtpDataStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpDataStream_ReadDelegate__Class>(type_info(), "System.Net", "FtpDataStream", "ReadDelegate");
        }
        inline app::FtpDataStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FtpDataStream_ReadDelegate>(get_class());
        }
    } // namespace FtpDataStream_ReadDelegate
} // namespace app::classes::types
