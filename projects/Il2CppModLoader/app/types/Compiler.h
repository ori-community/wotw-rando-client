#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Compiler {
        inline app::Compiler__Class** type_info = (app::Compiler__Class**)(modloader::win::memory::resolve_rva(0x04783AF8));
        inline app::Compiler__Class* get_class() {
            return il2cpp::get_class<app::Compiler__Class>(type_info, "System.Xml.Schema", "Compiler");
        }
        inline app::Compiler* create() {
            return il2cpp::create_object<app::Compiler>(get_class());
        }
    } // namespace Compiler
} // namespace app::classes::types
