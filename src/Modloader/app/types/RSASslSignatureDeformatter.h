#pragma once
#include <Modloader/app/structs/RSASslSignatureDeformatter.h>
#include <Modloader/app/structs/RSASslSignatureDeformatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSASslSignatureDeformatter {
        inline app::RSASslSignatureDeformatter__Class** type_info() {
            static app::RSASslSignatureDeformatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSASslSignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04784A18));
            }
            return cache;
        }
        inline app::RSASslSignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSASslSignatureDeformatter__Class>(type_info(), "Mono.Security.Protocol.Tls", "RSASslSignatureDeformatter");
        }
        inline app::RSASslSignatureDeformatter* create() {
            return il2cpp::create_object<app::RSASslSignatureDeformatter>(get_class());
        }
    } // namespace RSASslSignatureDeformatter
} // namespace app::classes::types
