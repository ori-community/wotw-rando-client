#pragma once
#include <Modloader/app/structs/DSASignatureFormatter.h>
#include <Modloader/app/structs/DSASignatureFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSASignatureFormatter {
        inline app::DSASignatureFormatter__Class** type_info() {
            static app::DSASignatureFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSASignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04770C68));
            }
            return cache;
        }
        inline app::DSASignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureFormatter__Class>(type_info(), "System.Security.Cryptography", "DSASignatureFormatter");
        }
        inline app::DSASignatureFormatter* create() {
            return il2cpp::create_object<app::DSASignatureFormatter>(get_class());
        }
    } // namespace DSASignatureFormatter
} // namespace app::classes::types
