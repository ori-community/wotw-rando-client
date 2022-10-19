#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryObjectWithMapTyped {
        inline app::BinaryObjectWithMapTyped__Class** type_info = (app::BinaryObjectWithMapTyped__Class**)(modloader::win::memory::resolve_rva(0x04786430));
        inline app::BinaryObjectWithMapTyped__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectWithMapTyped__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
        }
        inline app::BinaryObjectWithMapTyped* create() {
            return il2cpp::create_object<app::BinaryObjectWithMapTyped>(get_class());
        }
    } // namespace BinaryObjectWithMapTyped
} // namespace app::classes::types
