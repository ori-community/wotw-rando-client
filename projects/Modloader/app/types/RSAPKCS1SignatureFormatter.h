#pragma once
#include <Modloader/app/structs/RSAPKCS1SignatureFormatter.h>
#include <Modloader/app/structs/RSAPKCS1SignatureFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureFormatter {
        inline app::RSAPKCS1SignatureFormatter__Class** type_info() {
            static app::RSAPKCS1SignatureFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1SignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04727490));
            }
            return cache;
        }
        inline app::RSAPKCS1SignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureFormatter__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
        }
        inline app::RSAPKCS1SignatureFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureFormatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureFormatter
} // namespace app::classes::types
