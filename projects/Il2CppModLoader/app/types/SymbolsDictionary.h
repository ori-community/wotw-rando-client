#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SymbolsDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SymbolsDictionary__Class** type_info;
        inline app::SymbolsDictionary__Class* get_class() {
            return il2cpp::get_class<app::SymbolsDictionary__Class>(type_info, "System.Xml.Schema", "SymbolsDictionary");
        }
        inline app::SymbolsDictionary* create() {
            return il2cpp::create_object<app::SymbolsDictionary>(get_class());
        }
    } // namespace SymbolsDictionary
} // namespace app::classes::types
