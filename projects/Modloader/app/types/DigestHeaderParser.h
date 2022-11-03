#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DigestHeaderParser {
        inline app::DigestHeaderParser__Class** type_info = (app::DigestHeaderParser__Class**)(modloader::win::memory::resolve_rva(0x0476F0A8));
        inline app::DigestHeaderParser__Class* get_class() {
            return il2cpp::get_class<app::DigestHeaderParser__Class>(type_info, "System.Net", "DigestHeaderParser");
        }
        inline app::DigestHeaderParser* create() {
            return il2cpp::create_object<app::DigestHeaderParser>(get_class());
        }
    } // namespace DigestHeaderParser
} // namespace app::classes::types
