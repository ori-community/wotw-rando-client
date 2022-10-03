#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryMethodReturn {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryMethodReturn__Class** type_info;
        inline app::BinaryMethodReturn__Class* get_class() {
            return il2cpp::get_class<app::BinaryMethodReturn__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
        }
        inline app::BinaryMethodReturn* create() {
            return il2cpp::create_object<app::BinaryMethodReturn>(get_class());
        }
    } // namespace BinaryMethodReturn
} // namespace app::classes::types
