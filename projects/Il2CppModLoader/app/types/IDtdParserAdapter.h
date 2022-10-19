#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdParserAdapter {
        inline app::IDtdParserAdapter__Class** type_info = (app::IDtdParserAdapter__Class**)(modloader::win::memory::resolve_rva(0x04716F98));
        inline app::IDtdParserAdapter__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapter__Class>(type_info, "System.Xml", "IDtdParserAdapter");
        }
    } // namespace IDtdParserAdapter
} // namespace app::classes::types
