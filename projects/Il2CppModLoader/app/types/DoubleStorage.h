#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoubleStorage__Class** type_info;
        inline app::DoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::DoubleStorage__Class>(type_info, "System.Data.Common", "DoubleStorage");
        }
        inline app::DoubleStorage* create() {
            return il2cpp::create_object<app::DoubleStorage>(get_class());
        }
    } // namespace DoubleStorage
} // namespace app::classes::types
