#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringFacetsChecker {
        inline app::StringFacetsChecker__Class** type_info = (app::StringFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0473D308));
        inline app::StringFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::StringFacetsChecker__Class>(type_info, "System.Xml.Schema", "StringFacetsChecker");
        }
        inline app::StringFacetsChecker* create() {
            return il2cpp::create_object<app::StringFacetsChecker>(get_class());
        }
    } // namespace StringFacetsChecker
} // namespace app::classes::types
