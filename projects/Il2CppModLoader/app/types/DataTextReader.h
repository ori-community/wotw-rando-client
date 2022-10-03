#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTextReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTextReader__Class** type_info;
        inline app::DataTextReader__Class* get_class() {
            return il2cpp::get_class<app::DataTextReader__Class>(type_info, "System.Data", "DataTextReader");
        }
        inline app::DataTextReader* create() {
            return il2cpp::create_object<app::DataTextReader>(get_class());
        }
    } // namespace DataTextReader
} // namespace app::classes::types
