#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Variable {
        inline app::Variable__Class** type_info = (app::Variable__Class**)(modloader::win::memory::resolve_rva(0x04753108));
        inline app::Variable__Class* get_class() {
            return il2cpp::get_class<app::Variable__Class>(type_info, "MS.Internal.Xml.XPath", "Variable");
        }
        inline app::Variable* create() {
            return il2cpp::create_object<app::Variable>(get_class());
        }
    } // namespace Variable
} // namespace app::classes::types
