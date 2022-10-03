#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Compiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Compiler__Class** type_info;
        inline app::Compiler__Class* get_class() {
            return il2cpp::get_class<app::Compiler__Class>(type_info, "System.Xml.Schema", "Compiler");
        }
        inline app::Compiler* create() {
            return il2cpp::create_object<app::Compiler>(get_class());
        }
    } // namespace Compiler
} // namespace app::classes::types
