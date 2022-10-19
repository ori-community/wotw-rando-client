#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonTextWriter {
        inline app::JsonTextWriter__Class** type_info = (app::JsonTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04746B58));
        inline app::JsonTextWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonTextWriter__Class>(type_info, "Newtonsoft.Json", "JsonTextWriter");
        }
        inline app::JsonTextWriter* create() {
            return il2cpp::create_object<app::JsonTextWriter>(get_class());
        }
    } // namespace JsonTextWriter
} // namespace app::classes::types
