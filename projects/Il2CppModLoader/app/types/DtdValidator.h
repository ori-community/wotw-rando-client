#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DtdValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DtdValidator__Class** type_info;
        inline app::DtdValidator__Class* get_class() {
            return il2cpp::get_class<app::DtdValidator__Class>(type_info, "System.Xml.Schema", "DtdValidator");
        }
        inline app::DtdValidator* create() {
            return il2cpp::create_object<app::DtdValidator>(get_class());
        }
    } // namespace DtdValidator
} // namespace app::classes::types
