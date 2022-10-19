#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DfaContentValidator {
        inline app::DfaContentValidator__Class** type_info = (app::DfaContentValidator__Class**)(modloader::win::memory::resolve_rva(0x0476A838));
        inline app::DfaContentValidator__Class* get_class() {
            return il2cpp::get_class<app::DfaContentValidator__Class>(type_info, "System.Xml.Schema", "DfaContentValidator");
        }
        inline app::DfaContentValidator* create() {
            return il2cpp::create_object<app::DfaContentValidator>(get_class());
        }
    } // namespace DfaContentValidator
} // namespace app::classes::types
