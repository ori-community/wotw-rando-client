#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FastEncoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FastEncoder__Class** type_info;
        inline app::FastEncoder__Class* get_class() {
            return il2cpp::get_class<app::FastEncoder__Class>(type_info, "Unity.IO.Compression", "FastEncoder");
        }
        inline app::FastEncoder* create() {
            return il2cpp::create_object<app::FastEncoder>(get_class());
        }
    } // namespace FastEncoder
} // namespace app::classes::types
