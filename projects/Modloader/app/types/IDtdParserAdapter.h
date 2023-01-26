#pragma once
#include <Modloader/app/structs/IDtdParserAdapter.h>
#include <Modloader/app/structs/IDtdParserAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdParserAdapter {
        inline app::IDtdParserAdapter__Class** type_info() {
            static app::IDtdParserAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdParserAdapter__Class**)(modloader::win::memory::resolve_rva(0x04716F98));
            }
            return cache;
        }
        inline app::IDtdParserAdapter__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapter__Class>(type_info(), "System.Xml", "IDtdParserAdapter");
        }
    } // namespace IDtdParserAdapter
} // namespace app::classes::types
