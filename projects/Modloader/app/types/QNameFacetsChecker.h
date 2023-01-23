#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QNameFacetsChecker__Class.h>
#include <Modloader/app/structs/QNameFacetsChecker.h>

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
