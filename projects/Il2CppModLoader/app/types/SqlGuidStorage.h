#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlGuidStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlGuidStorage__Class** type_info;
        inline app::SqlGuidStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlGuidStorage__Class>(type_info, "System.Data.Common", "SqlGuidStorage");
        }
        inline app::SqlGuidStorage* create() {
            return il2cpp::create_object<app::SqlGuidStorage>(get_class());
        }
    } // namespace SqlGuidStorage
} // namespace app::classes::types
