#pragma once
#include <Modloader/app/structs/RSASslSignatureFormatter.h>
#include <Modloader/app/structs/RSASslSignatureFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSASslSignatureFormatter {
        inline app::RSASslSignatureFormatter__Class** type_info() {
            static app::RSASslSignatureFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSASslSignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x0471FC88));
            }
            return cache;
        }
        inline app::RSASslSignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSASslSignatureFormatter__Class>(type_info(), "Mono.Security.Protocol.Tls", "RSASslSignatureFormatter");
        }
        inline app::RSASslSignatureFormatter* create() {
            return il2cpp::create_object<app::RSASslSignatureFormatter>(get_class());
        }
    } // namespace RSASslSignatureFormatter
} // namespace app::classes::types
