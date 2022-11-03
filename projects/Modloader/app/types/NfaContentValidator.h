#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NfaContentValidator {
        inline app::NfaContentValidator__Class** type_info = (app::NfaContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04764860));
        inline app::NfaContentValidator__Class* get_class() {
            return il2cpp::get_class<app::NfaContentValidator__Class>(type_info, "System.Xml.Schema", "NfaContentValidator");
        }
        inline app::NfaContentValidator* create() {
            return il2cpp::create_object<app::NfaContentValidator>(get_class());
        }
    } // namespace NfaContentValidator
} // namespace app::classes::types
