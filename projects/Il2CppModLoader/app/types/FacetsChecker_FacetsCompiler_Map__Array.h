#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler_Map__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FacetsChecker_FacetsCompiler_Map__Array__Class** type_info;
        inline app::FacetsChecker_FacetsCompiler_Map__Array__Class* get_class() {
            return il2cpp::get_class<app::FacetsChecker_FacetsCompiler_Map__Array__Class>(type_info, "System.Xml.Schema", "FacetsChecker+FacetsCompiler+Map[]");
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Array* create() {
            return il2cpp::create_object<app::FacetsChecker_FacetsCompiler_Map__Array>(get_class());
        }
    } // namespace FacetsChecker_FacetsCompiler_Map__Array
} // namespace app::classes::types
