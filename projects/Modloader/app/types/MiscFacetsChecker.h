#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MiscFacetsChecker {
        inline app::MiscFacetsChecker__Class** type_info = (app::MiscFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0473E038));
        inline app::MiscFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::MiscFacetsChecker__Class>(type_info, "System.Xml.Schema", "MiscFacetsChecker");
        }
        inline app::MiscFacetsChecker* create() {
            return il2cpp::create_object<app::MiscFacetsChecker>(get_class());
        }
    } // namespace MiscFacetsChecker
} // namespace app::classes::types
