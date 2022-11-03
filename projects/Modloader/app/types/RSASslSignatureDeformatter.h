#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSASslSignatureDeformatter {
        inline app::RSASslSignatureDeformatter__Class** type_info = (app::RSASslSignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04784A18));
        inline app::RSASslSignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSASslSignatureDeformatter__Class>(type_info, "Mono.Security.Protocol.Tls", "RSASslSignatureDeformatter");
        }
        inline app::RSASslSignatureDeformatter* create() {
            return il2cpp::create_object<app::RSASslSignatureDeformatter>(get_class());
        }
    } // namespace RSASslSignatureDeformatter
} // namespace app::classes::types
