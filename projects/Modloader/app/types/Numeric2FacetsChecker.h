#pragma once
#include <Modloader/app/structs/Numeric2FacetsChecker.h>
#include <Modloader/app/structs/Numeric2FacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Numeric2FacetsChecker {
        inline app::Numeric2FacetsChecker__Class** type_info() {
            static app::Numeric2FacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Numeric2FacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04752430));
            }
            return cache;
        }
        inline app::Numeric2FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::Numeric2FacetsChecker__Class>(type_info(), "System.Xml.Schema", "Numeric2FacetsChecker");
        }
        inline app::Numeric2FacetsChecker* create() {
            return il2cpp::create_object<app::Numeric2FacetsChecker>(get_class());
        }
    } // namespace Numeric2FacetsChecker
} // namespace app::classes::types
