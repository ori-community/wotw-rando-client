#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICustomFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICustomFormatter__Class** type_info;
        inline app::ICustomFormatter__Class* get_class() {
            return il2cpp::get_class<app::ICustomFormatter__Class>(type_info, "System", "ICustomFormatter");
        }
        inline app::ICustomFormatter* create() {
            return il2cpp::create_object<app::ICustomFormatter>(get_class());
        }
    } // namespace ICustomFormatter
} // namespace app::classes::types
