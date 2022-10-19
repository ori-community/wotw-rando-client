#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JTokenReader {
        inline app::JTokenReader__Class** type_info = (app::JTokenReader__Class**)(modloader::win::memory::resolve_rva(0x04750E40));
        inline app::JTokenReader__Class* get_class() {
            return il2cpp::get_class<app::JTokenReader__Class>(type_info, "Newtonsoft.Json.Linq", "JTokenReader");
        }
        inline app::JTokenReader* create() {
            return il2cpp::create_object<app::JTokenReader>(get_class());
        }
    } // namespace JTokenReader
} // namespace app::classes::types
