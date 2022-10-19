#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonDynamicContract {
        inline app::JsonDynamicContract__Class** type_info = (app::JsonDynamicContract__Class**)(modloader::win::memory::resolve_rva(0x0470B9C0));
        inline app::JsonDynamicContract__Class* get_class() {
            return il2cpp::get_class<app::JsonDynamicContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonDynamicContract");
        }
        inline app::JsonDynamicContract* create() {
            return il2cpp::create_object<app::JsonDynamicContract>(get_class());
        }
    } // namespace JsonDynamicContract
} // namespace app::classes::types
