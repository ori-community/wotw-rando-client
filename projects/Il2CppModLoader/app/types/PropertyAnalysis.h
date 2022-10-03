#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyAnalysis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyAnalysis__Class** type_info;
        inline app::PropertyAnalysis__Class* get_class() {
            return il2cpp::get_class<app::PropertyAnalysis__Class>(type_info, "System.Diagnostics.Tracing", "PropertyAnalysis");
        }
        inline app::PropertyAnalysis* create() {
            return il2cpp::create_object<app::PropertyAnalysis>(get_class());
        }
        inline app::PropertyAnalysis__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyAnalysis__Array>(get_class(), size);
        }
    } // namespace PropertyAnalysis
} // namespace app::classes::types
