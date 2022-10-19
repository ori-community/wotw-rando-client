#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QNameFacetsChecker {
        inline app::QNameFacetsChecker__Class** type_info = (app::QNameFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x047627E0));
        inline app::QNameFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::QNameFacetsChecker__Class>(type_info, "System.Xml.Schema", "QNameFacetsChecker");
        }
        inline app::QNameFacetsChecker* create() {
            return il2cpp::create_object<app::QNameFacetsChecker>(get_class());
        }
    } // namespace QNameFacetsChecker
} // namespace app::classes::types
