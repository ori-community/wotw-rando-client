#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader {
        inline app::JsonSerializerInternalReader__Class** type_info = (app::JsonSerializerInternalReader__Class**)(modloader::win::memory::resolve_rva(0x0476B8A0));
        inline app::JsonSerializerInternalReader__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalReader__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
        }
        inline app::JsonSerializerInternalReader* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader>(get_class());
        }
    } // namespace JsonSerializerInternalReader
} // namespace app::classes::types
