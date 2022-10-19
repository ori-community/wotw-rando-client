#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JTokenWriter {
        inline app::JTokenWriter__Class** type_info = (app::JTokenWriter__Class**)(modloader::win::memory::resolve_rva(0x04729878));
        inline app::JTokenWriter__Class* get_class() {
            return il2cpp::get_class<app::JTokenWriter__Class>(type_info, "Newtonsoft.Json.Linq", "JTokenWriter");
        }
        inline app::JTokenWriter* create() {
            return il2cpp::create_object<app::JTokenWriter>(get_class());
        }
    } // namespace JTokenWriter
} // namespace app::classes::types
