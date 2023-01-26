#pragma once
#include <Modloader/app/structs/QNameFacetsChecker.h>
#include <Modloader/app/structs/QNameFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QNameFacetsChecker {
        inline app::QNameFacetsChecker__Class** type_info() {
            static app::QNameFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QNameFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x047627E0));
            }
            return cache;
        }
        inline app::QNameFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::QNameFacetsChecker__Class>(type_info(), "System.Xml.Schema", "QNameFacetsChecker");
        }
        inline app::QNameFacetsChecker* create() {
            return il2cpp::create_object<app::QNameFacetsChecker>(get_class());
        }
    } // namespace QNameFacetsChecker
} // namespace app::classes::types
