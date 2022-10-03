#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Json_Parser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Json_Parser__Class** type_info;
        inline app::Json_Parser__Class* get_class() {
            return il2cpp::get_nested_class<app::Json_Parser__Class>(type_info, "Moon.Network.Web", "Json", "Parser");
        }
        inline app::Json_Parser* create() {
            return il2cpp::create_object<app::Json_Parser>(get_class());
        }
    } // namespace Json_Parser
} // namespace app::classes::types
