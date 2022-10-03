#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt32Storage__Class** type_info;
        inline app::UInt32Storage__Class* get_class() {
            return il2cpp::get_class<app::UInt32Storage__Class>(type_info, "System.Data.Common", "UInt32Storage");
        }
        inline app::UInt32Storage* create() {
            return il2cpp::create_object<app::UInt32Storage>(get_class());
        }
    } // namespace UInt32Storage
} // namespace app::classes::types
