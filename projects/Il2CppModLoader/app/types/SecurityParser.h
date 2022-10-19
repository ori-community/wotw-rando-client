#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityParser {
        inline app::SecurityParser__Class** type_info = (app::SecurityParser__Class**)(modloader::win::memory::resolve_rva(0x04725748));
        inline app::SecurityParser__Class* get_class() {
            return il2cpp::get_class<app::SecurityParser__Class>(type_info, "Mono.Xml", "SecurityParser");
        }
        inline app::SecurityParser* create() {
            return il2cpp::create_object<app::SecurityParser>(get_class());
        }
    } // namespace SecurityParser
} // namespace app::classes::types
