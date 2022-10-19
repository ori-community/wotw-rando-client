#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdParserAdapterV1 {
        inline app::IDtdParserAdapterV1__Class** type_info = (app::IDtdParserAdapterV1__Class**)(modloader::win::memory::resolve_rva(0x0473F958));
        inline app::IDtdParserAdapterV1__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapterV1__Class>(type_info, "System.Xml", "IDtdParserAdapterV1");
        }
    } // namespace IDtdParserAdapterV1
} // namespace app::classes::types
