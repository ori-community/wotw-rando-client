#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SymbolsDictionary {
        inline app::SymbolsDictionary__Class** type_info = (app::SymbolsDictionary__Class**)(modloader::win::memory::resolve_rva(0x04787310));
        inline app::SymbolsDictionary__Class* get_class() {
            return il2cpp::get_class<app::SymbolsDictionary__Class>(type_info, "System.Xml.Schema", "SymbolsDictionary");
        }
        inline app::SymbolsDictionary* create() {
            return il2cpp::create_object<app::SymbolsDictionary>(get_class());
        }
    } // namespace SymbolsDictionary
} // namespace app::classes::types
