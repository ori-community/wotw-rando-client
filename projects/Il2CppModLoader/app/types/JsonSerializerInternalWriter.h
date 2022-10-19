#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalWriter {
        inline app::JsonSerializerInternalWriter__Class** type_info = (app::JsonSerializerInternalWriter__Class**)(modloader::win::memory::resolve_rva(0x04702D68));
        inline app::JsonSerializerInternalWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalWriter__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
        }
        inline app::JsonSerializerInternalWriter* create() {
            return il2cpp::create_object<app::JsonSerializerInternalWriter>(get_class());
        }
    } // namespace JsonSerializerInternalWriter
} // namespace app::classes::types
