#pragma once
#include <Modloader/app/structs/SecurityParser.h>
#include <Modloader/app/structs/SecurityParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityParser {
        inline app::SecurityParser__Class** type_info() {
            static app::SecurityParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityParser__Class**)(modloader::win::memory::resolve_rva(0x04725748));
            }
            return cache;
        }
        inline app::SecurityParser__Class* get_class() {
            return il2cpp::get_class<app::SecurityParser__Class>(type_info(), "Mono.Xml", "SecurityParser");
        }
        inline app::SecurityParser* create() {
            return il2cpp::create_object<app::SecurityParser>(get_class());
        }
    } // namespace SecurityParser
} // namespace app::classes::types
