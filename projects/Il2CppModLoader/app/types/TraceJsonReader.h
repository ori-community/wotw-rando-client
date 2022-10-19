#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceJsonReader {
        inline app::TraceJsonReader__Class** type_info = (app::TraceJsonReader__Class**)(modloader::win::memory::resolve_rva(0x0474F7C8));
        inline app::TraceJsonReader__Class* get_class() {
            return il2cpp::get_class<app::TraceJsonReader__Class>(type_info, "Newtonsoft.Json.Serialization", "TraceJsonReader");
        }
        inline app::TraceJsonReader* create() {
            return il2cpp::create_object<app::TraceJsonReader>(get_class());
        }
    } // namespace TraceJsonReader
} // namespace app::classes::types
