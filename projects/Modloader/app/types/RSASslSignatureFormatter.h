#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSASslSignatureFormatter {
        inline app::RSASslSignatureFormatter__Class** type_info = (app::RSASslSignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x0471FC88));
        inline app::RSASslSignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSASslSignatureFormatter__Class>(type_info, "Mono.Security.Protocol.Tls", "RSASslSignatureFormatter");
        }
        inline app::RSASslSignatureFormatter* create() {
            return il2cpp::create_object<app::RSASslSignatureFormatter>(get_class());
        }
    } // namespace RSASslSignatureFormatter
} // namespace app::classes::types
