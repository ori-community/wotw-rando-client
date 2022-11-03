#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Numeric10FacetsChecker {
        inline app::Numeric10FacetsChecker__Class** type_info = (app::Numeric10FacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04719EE0));
        inline app::Numeric10FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::Numeric10FacetsChecker__Class>(type_info, "System.Xml.Schema", "Numeric10FacetsChecker");
        }
        inline app::Numeric10FacetsChecker* create() {
            return il2cpp::create_object<app::Numeric10FacetsChecker>(get_class());
        }
    } // namespace Numeric10FacetsChecker
} // namespace app::classes::types
