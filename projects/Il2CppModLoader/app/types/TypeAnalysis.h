#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeAnalysis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeAnalysis__Class** type_info;
        inline app::TypeAnalysis__Class* get_class() {
            return il2cpp::get_class<app::TypeAnalysis__Class>(type_info, "System.Diagnostics.Tracing", "TypeAnalysis");
        }
        inline app::TypeAnalysis* create() {
            return il2cpp::create_object<app::TypeAnalysis>(get_class());
        }
    } // namespace TypeAnalysis
} // namespace app::classes::types
