#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryConverter_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryConverter_1__Class** type_info;
        inline app::BinaryConverter_1__Class* get_class() {
            return il2cpp::get_class<app::BinaryConverter_1__Class>(type_info, "Newtonsoft.Json.Converters", "BinaryConverter");
        }
        inline app::BinaryConverter_1* create() {
            return il2cpp::create_object<app::BinaryConverter_1>(get_class());
        }
    } // namespace BinaryConverter_1
} // namespace app::classes::types
