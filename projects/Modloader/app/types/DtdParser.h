#pragma once
#include <Modloader/app/structs/DtdParser.h>
#include <Modloader/app/structs/DtdParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DtdParser {
        inline app::DtdParser__Class** type_info() {
            static app::DtdParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DtdParser__Class**)(modloader::win::memory::resolve_rva(0x04753B88));
            }
            return cache;
        }
        inline app::DtdParser__Class* get_class() {
            return il2cpp::get_class<app::DtdParser__Class>(type_info(), "System.Xml", "DtdParser");
        }
        inline app::DtdParser* create() {
            return il2cpp::create_object<app::DtdParser>(get_class());
        }
    } // namespace DtdParser
} // namespace app::classes::types
