#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceJsonWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TraceJsonWriter__Class** type_info;
        inline app::TraceJsonWriter__Class* get_class() {
            return il2cpp::get_class<app::TraceJsonWriter__Class>(type_info, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
        }
        inline app::TraceJsonWriter* create() {
            return il2cpp::create_object<app::TraceJsonWriter>(get_class());
        }
    } // namespace TraceJsonWriter
} // namespace app::classes::types
