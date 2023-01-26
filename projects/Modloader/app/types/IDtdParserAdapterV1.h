#pragma once
#include <Modloader/app/structs/IDtdParserAdapterV1.h>
#include <Modloader/app/structs/IDtdParserAdapterV1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdParserAdapterV1 {
        inline app::IDtdParserAdapterV1__Class** type_info() {
            static app::IDtdParserAdapterV1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdParserAdapterV1__Class**)(modloader::win::memory::resolve_rva(0x0473F958));
            }
            return cache;
        }
        inline app::IDtdParserAdapterV1__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapterV1__Class>(type_info(), "System.Xml", "IDtdParserAdapterV1");
        }
    } // namespace IDtdParserAdapterV1
} // namespace app::classes::types
