#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataException__Class** type_info;
        inline app::DataException__Class* get_class() {
            return il2cpp::get_class<app::DataException__Class>(type_info, "System.Data", "DataException");
        }
        inline app::DataException* create() {
            return il2cpp::create_object<app::DataException>(get_class());
        }
    } // namespace DataException
} // namespace app::classes::types
