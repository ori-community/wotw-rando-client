#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTableConverter__Class** type_info;
        inline app::DataTableConverter__Class* get_class() {
            return il2cpp::get_class<app::DataTableConverter__Class>(type_info, "Newtonsoft.Json.Converters", "DataTableConverter");
        }
        inline app::DataTableConverter* create() {
            return il2cpp::create_object<app::DataTableConverter>(get_class());
        }
    } // namespace DataTableConverter
} // namespace app::classes::types
