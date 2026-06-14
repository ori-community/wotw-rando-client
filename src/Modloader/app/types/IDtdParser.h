#pragma once
#include <Modloader/app/structs/IDtdParser.h>
#include <Modloader/app/structs/IDtdParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdParser {
        inline app::IDtdParser__Class** type_info() {
            static app::IDtdParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdParser__Class**)(modloader::win::memory::resolve_rva(0x04733480));
            }
            return cache;
        }
        inline app::IDtdParser__Class* get_class() {
            return il2cpp::get_class<app::IDtdParser__Class>(type_info(), "System.Xml", "IDtdParser");
        }
    } // namespace IDtdParser
} // namespace app::classes::types
