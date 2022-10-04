#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdParserAdapter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdParserAdapter__Class** type_info;
        inline app::IDtdParserAdapter__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapter__Class>(type_info, "System.Xml", "IDtdParserAdapter");
        }
    } // namespace IDtdParserAdapter
} // namespace app::classes::types
