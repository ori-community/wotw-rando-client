#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowBuilder__Class** type_info;
        inline app::DataRowBuilder__Class* get_class() {
            return il2cpp::get_class<app::DataRowBuilder__Class>(type_info, "System.Data", "DataRowBuilder");
        }
        inline app::DataRowBuilder* create() {
            return il2cpp::create_object<app::DataRowBuilder>(get_class());
        }
    } // namespace DataRowBuilder
} // namespace app::classes::types
