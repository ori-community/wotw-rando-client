#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeAnalysis {
        inline app::TypeAnalysis__Class** type_info = (app::TypeAnalysis__Class**)(modloader::win::memory::resolve_rva(0x04733258));
        inline app::TypeAnalysis__Class* get_class() {
            return il2cpp::get_class<app::TypeAnalysis__Class>(type_info, "System.Diagnostics.Tracing", "TypeAnalysis");
        }
        inline app::TypeAnalysis* create() {
            return il2cpp::create_object<app::TypeAnalysis>(get_class());
        }
    } // namespace TypeAnalysis
} // namespace app::classes::types
