#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitConverter__Class** type_info;
        inline app::BitConverter__Class* get_class() {
            return il2cpp::get_class<app::BitConverter__Class>(type_info, "System", "BitConverter");
        }
        inline app::BitConverter* create() {
            return il2cpp::create_object<app::BitConverter>(get_class());
        }
    } // namespace BitConverter
} // namespace app::classes::types
