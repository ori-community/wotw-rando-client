#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivityFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivityFilter__Class** type_info;
        inline app::ActivityFilter__Class* get_class() {
            return il2cpp::get_class<app::ActivityFilter__Class>(type_info, "System.Diagnostics.Tracing", "ActivityFilter");
        }
        inline app::ActivityFilter* create() {
            return il2cpp::create_object<app::ActivityFilter>(get_class());
        }
    } // namespace ActivityFilter
} // namespace app::classes::types
