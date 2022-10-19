#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Json_Serializer {
        inline app::Json_Serializer__Class** type_info = (app::Json_Serializer__Class**)(modloader::win::memory::resolve_rva(0x047350C0));
        inline app::Json_Serializer__Class* get_class() {
            return il2cpp::get_nested_class<app::Json_Serializer__Class>(type_info, "Moon.Network.Web", "Json", "Serializer");
        }
        inline app::Json_Serializer* create() {
            return il2cpp::create_object<app::Json_Serializer>(get_class());
        }
    } // namespace Json_Serializer
} // namespace app::classes::types
