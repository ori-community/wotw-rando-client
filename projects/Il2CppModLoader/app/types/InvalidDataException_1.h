#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidDataException_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidDataException_1__Class** type_info;
        inline app::InvalidDataException_1__Class* get_class() {
            return il2cpp::get_class<app::InvalidDataException_1__Class>(type_info, "Unity.IO.Compression", "InvalidDataException");
        }
        inline app::InvalidDataException_1* create() {
            return il2cpp::create_object<app::InvalidDataException_1>(get_class());
        }
    } // namespace InvalidDataException_1
} // namespace app::classes::types
