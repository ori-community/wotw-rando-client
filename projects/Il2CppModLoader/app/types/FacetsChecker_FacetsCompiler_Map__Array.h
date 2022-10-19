#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler_Map__Array {
        inline app::FacetsChecker_FacetsCompiler_Map__Array__Class** type_info = (app::FacetsChecker_FacetsCompiler_Map__Array__Class**)(modloader::win::memory::resolve_rva(0x04754270));
        inline app::FacetsChecker_FacetsCompiler_Map__Array__Class* get_class() {
            return il2cpp::get_class<app::FacetsChecker_FacetsCompiler_Map__Array__Class>(type_info, "System.Xml.Schema", "FacetsChecker+FacetsCompiler+Map[]");
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Array* create() {
            return il2cpp::create_object<app::FacetsChecker_FacetsCompiler_Map__Array>(get_class());
        }
    } // namespace FacetsChecker_FacetsCompiler_Map__Array
} // namespace app::classes::types
