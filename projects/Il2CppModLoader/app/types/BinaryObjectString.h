#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryObjectString {
        inline app::BinaryObjectString__Class** type_info = (app::BinaryObjectString__Class**)(modloader::win::memory::resolve_rva(0x047601E8));
        inline app::BinaryObjectString__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectString__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
        }
        inline app::BinaryObjectString* create() {
            return il2cpp::create_object<app::BinaryObjectString>(get_class());
        }
    } // namespace BinaryObjectString
} // namespace app::classes::types
