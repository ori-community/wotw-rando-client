#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonDictionaryContract {
        inline app::JsonDictionaryContract__Class** type_info = (app::JsonDictionaryContract__Class**)(modloader::win::memory::resolve_rva(0x04739F80));
        inline app::JsonDictionaryContract__Class* get_class() {
            return il2cpp::get_class<app::JsonDictionaryContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
        }
        inline app::JsonDictionaryContract* create() {
            return il2cpp::create_object<app::JsonDictionaryContract>(get_class());
        }
    } // namespace JsonDictionaryContract
} // namespace app::classes::types
