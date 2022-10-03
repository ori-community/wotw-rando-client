#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Parser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Parser__Class** type_info;
        inline app::Parser__Class* get_class() {
            return il2cpp::get_class<app::Parser__Class>(type_info, "System.Security.Util", "Parser");
        }
        inline app::Parser* create() {
            return il2cpp::create_object<app::Parser>(get_class());
        }
    } // namespace Parser
} // namespace app::classes::types
