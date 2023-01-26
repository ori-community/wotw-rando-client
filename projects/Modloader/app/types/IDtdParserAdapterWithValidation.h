#pragma once
#include <Modloader/app/structs/IDtdParserAdapterWithValidation.h>
#include <Modloader/app/structs/IDtdParserAdapterWithValidation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdParserAdapterWithValidation {
        inline app::IDtdParserAdapterWithValidation__Class** type_info() {
            static app::IDtdParserAdapterWithValidation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdParserAdapterWithValidation__Class**)(modloader::win::memory::resolve_rva(0x0474C858));
            }
            return cache;
        }
        inline app::IDtdParserAdapterWithValidation__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapterWithValidation__Class>(type_info(), "System.Xml", "IDtdParserAdapterWithValidation");
        }
    } // namespace IDtdParserAdapterWithValidation
} // namespace app::classes::types
