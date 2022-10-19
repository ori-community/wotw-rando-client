#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseValidator {
        inline app::BaseValidator__Class** type_info = (app::BaseValidator__Class**)(modloader::win::memory::resolve_rva(0x047099C0));
        inline app::BaseValidator__Class* get_class() {
            return il2cpp::get_class<app::BaseValidator__Class>(type_info, "System.Xml.Schema", "BaseValidator");
        }
        inline app::BaseValidator* create() {
            return il2cpp::create_object<app::BaseValidator>(get_class());
        }
    } // namespace BaseValidator
} // namespace app::classes::types
