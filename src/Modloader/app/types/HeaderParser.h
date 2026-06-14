#pragma once
#include <Modloader/app/structs/HeaderParser.h>
#include <Modloader/app/structs/HeaderParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderParser {
        inline app::HeaderParser__Class** type_info() {
            static app::HeaderParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HeaderParser__Class**)(modloader::win::memory::resolve_rva(0x0473B0F8));
            }
            return cache;
        }
        inline app::HeaderParser__Class* get_class() {
            return il2cpp::get_class<app::HeaderParser__Class>(type_info(), "System.Net", "HeaderParser");
        }
        inline app::HeaderParser* create() {
            return il2cpp::create_object<app::HeaderParser>(get_class());
        }
    } // namespace HeaderParser
} // namespace app::classes::types
