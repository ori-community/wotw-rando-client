#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryObjectWithMapTyped {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryObjectWithMapTyped__Class** type_info;
        inline app::BinaryObjectWithMapTyped__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectWithMapTyped__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
        }
        inline app::BinaryObjectWithMapTyped* create() {
            return il2cpp::create_object<app::BinaryObjectWithMapTyped>(get_class());
        }
    } // namespace BinaryObjectWithMapTyped
} // namespace app::classes::types
