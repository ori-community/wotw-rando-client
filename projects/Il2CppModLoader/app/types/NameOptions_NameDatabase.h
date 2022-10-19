#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameOptions_NameDatabase {
        namespace {
            inline app::NameOptions_NameDatabase__Class* type_info_ref = nullptr;
        }
        inline app::NameOptions_NameDatabase__Class** type_info = &type_info_ref;
        inline app::NameOptions_NameDatabase__Class* get_class() {
            return il2cpp::get_nested_class<app::NameOptions_NameDatabase__Class>(type_info, "", "NameOptions", "NameDatabase");
        }
        inline app::NameOptions_NameDatabase* create() {
            return il2cpp::create_object<app::NameOptions_NameDatabase>(get_class());
        }
    } // namespace NameOptions_NameDatabase
} // namespace app::classes::types
