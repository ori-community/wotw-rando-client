#pragma once
#include <Modloader/app/structs/AsymmetricSignatureFormatter.h>
#include <Modloader/app/structs/AsymmetricSignatureFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymmetricSignatureFormatter {
        inline app::AsymmetricSignatureFormatter__Class** type_info() {
            static app::AsymmetricSignatureFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsymmetricSignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04748DB0));
            }
            return cache;
        }
        inline app::AsymmetricSignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricSignatureFormatter__Class>(type_info(), "System.Security.Cryptography", "AsymmetricSignatureFormatter");
        }
        inline app::AsymmetricSignatureFormatter* create() {
            return il2cpp::create_object<app::AsymmetricSignatureFormatter>(get_class());
        }
    } // namespace AsymmetricSignatureFormatter
} // namespace app::classes::types
