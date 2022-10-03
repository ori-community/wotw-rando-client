#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderInfoTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HeaderInfoTable__Class** type_info;
        inline app::HeaderInfoTable__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfoTable__Class>(type_info, "System.Net", "HeaderInfoTable");
        }
        inline app::HeaderInfoTable* create() {
            return il2cpp::create_object<app::HeaderInfoTable>(get_class());
        }
    } // namespace HeaderInfoTable
} // namespace app::classes::types
