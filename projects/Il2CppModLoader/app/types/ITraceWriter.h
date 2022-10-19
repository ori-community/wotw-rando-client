#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITraceWriter {
        inline app::ITraceWriter__Class** type_info = (app::ITraceWriter__Class**)(modloader::win::memory::resolve_rva(0x04702DD8));
        inline app::ITraceWriter__Class* get_class() {
            return il2cpp::get_class<app::ITraceWriter__Class>(type_info, "Newtonsoft.Json.Serialization", "ITraceWriter");
        }
    } // namespace ITraceWriter
} // namespace app::classes::types
