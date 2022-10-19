#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoValidator {
        inline app::AutoValidator__Class** type_info = (app::AutoValidator__Class**)(modloader::win::memory::resolve_rva(0x04717500));
        inline app::AutoValidator__Class* get_class() {
            return il2cpp::get_class<app::AutoValidator__Class>(type_info, "System.Xml.Schema", "AutoValidator");
        }
        inline app::AutoValidator* create() {
            return il2cpp::create_object<app::AutoValidator>(get_class());
        }
    } // namespace AutoValidator
} // namespace app::classes::types
