#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnionFacetsChecker {
        inline app::UnionFacetsChecker__Class** type_info = (app::UnionFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04718478));
        inline app::UnionFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::UnionFacetsChecker__Class>(type_info, "System.Xml.Schema", "UnionFacetsChecker");
        }
        inline app::UnionFacetsChecker* create() {
            return il2cpp::create_object<app::UnionFacetsChecker>(get_class());
        }
    } // namespace UnionFacetsChecker
} // namespace app::classes::types
