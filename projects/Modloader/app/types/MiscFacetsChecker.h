#pragma once
#include <Modloader/app/structs/MiscFacetsChecker.h>
#include <Modloader/app/structs/MiscFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MiscFacetsChecker {
        inline app::MiscFacetsChecker__Class** type_info() {
            static app::MiscFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MiscFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0473E038));
            }
            return cache;
        }
        inline app::MiscFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::MiscFacetsChecker__Class>(type_info(), "System.Xml.Schema", "MiscFacetsChecker");
        }
        inline app::MiscFacetsChecker* create() {
            return il2cpp::create_object<app::MiscFacetsChecker>(get_class());
        }
    } // namespace MiscFacetsChecker
} // namespace app::classes::types
