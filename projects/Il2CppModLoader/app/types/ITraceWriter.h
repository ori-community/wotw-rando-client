#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITraceWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITraceWriter__Class** type_info;
        inline app::ITraceWriter__Class* get_class() {
            return il2cpp::get_class<app::ITraceWriter__Class>(type_info, "Newtonsoft.Json.Serialization", "ITraceWriter");
        }
        inline app::ITraceWriter* create() {
            return il2cpp::create_object<app::ITraceWriter>(get_class());
        }
    } // namespace ITraceWriter
} // namespace app::classes::types
