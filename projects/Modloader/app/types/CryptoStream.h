#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptoStream {
        inline app::CryptoStream__Class** type_info = (app::CryptoStream__Class**)(modloader::win::memory::resolve_rva(0x04729740));
        inline app::CryptoStream__Class* get_class() {
            return il2cpp::get_class<app::CryptoStream__Class>(type_info, "System.Security.Cryptography", "CryptoStream");
        }
        inline app::CryptoStream* create() {
            return il2cpp::create_object<app::CryptoStream>(get_class());
        }
    } // namespace CryptoStream
} // namespace app::classes::types
