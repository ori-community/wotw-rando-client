#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataError {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataError__Class** type_info;
        inline app::DataError__Class* get_class() {
            return il2cpp::get_class<app::DataError__Class>(type_info, "System.Data", "DataError");
        }
        inline app::DataError* create() {
            return il2cpp::create_object<app::DataError>(get_class());
        }
    } // namespace DataError
} // namespace app::classes::types
