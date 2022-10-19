#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultProxySection {
        namespace {
            inline app::DefaultProxySection__Class* type_info_ref = nullptr;
        }
        inline app::DefaultProxySection__Class** type_info = &type_info_ref;
        inline app::DefaultProxySection__Class* get_class() {
            return il2cpp::get_class<app::DefaultProxySection__Class>(type_info, "System.Net.Configuration", "DefaultProxySection");
        }
        inline app::DefaultProxySection* create() {
            return il2cpp::create_object<app::DefaultProxySection>(get_class());
        }
    } // namespace DefaultProxySection
} // namespace app::classes::types
