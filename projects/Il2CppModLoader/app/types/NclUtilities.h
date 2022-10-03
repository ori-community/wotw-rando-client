#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NclUtilities {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NclUtilities__Class** type_info;
        inline app::NclUtilities__Class* get_class() {
            return il2cpp::get_class<app::NclUtilities__Class>(type_info, "System.Net", "NclUtilities");
        }
        inline app::NclUtilities* create() {
            return il2cpp::create_object<app::NclUtilities>(get_class());
        }
    } // namespace NclUtilities
} // namespace app::classes::types
