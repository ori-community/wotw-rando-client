#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt16Storage__Class** type_info;
        inline app::UInt16Storage__Class* get_class() {
            return il2cpp::get_class<app::UInt16Storage__Class>(type_info, "System.Data.Common", "UInt16Storage");
        }
        inline app::UInt16Storage* create() {
            return il2cpp::create_object<app::UInt16Storage>(get_class());
        }
    } // namespace UInt16Storage
} // namespace app::classes::types
